#include<iostream>
#include<iomanip>
#include<string>
#include<vector>


struct City
{
	std::string name;
	long population;
	double cost;
};

struct Country
{
	std::string name;
	std::vector<City> cities;
};

struct Tours
{
	std::string title;
	std::vector<Country> countries;
};


void ruler() {
	std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl;
}

int main()
{
	Tours tours
	{ "Tour Ticket Prices from Miami",
		{
			{
				"Colombia", {
					{ "Bogota", 8778000, 400.98 },
					{ "Cali", 2401000, 424.12 },
					{ "Medellin", 2464000, 350.98 },
					{ "Cartagena", 972000, 345.34 }
				},
			},
			{
				"Brazil", {
					{ "Rio De Janiero", 13500000, 567.45 },
					{ "Sao Paulo", 11310000, 975.45 },
					{ "Salvador", 18234000, 855.99 }
				},
			},
			{
				"Chile", {
					{ "Valdivia", 260000, 569.12 },
					{ "Santiago", 7040000, 520.00 }
			},
		},
			{ "Argentina", {
				{ "Buenos Aires", 3010000, 723.77 }
			}
		},
	}
	};



	const int totalWidth{ 70 };
	const int field1Width{ 20 };    // Country name
	const int field2Width{ 20 };    // City name
	const int field3Width{ 15 };    // Population
	const int field4Width{ 15 };    // Cost

	// Display the Report title header centered in width of total_width
	// You could make this a function for practice

	ruler();
	int title_length = tours.title.length();
	std::cout << std::setw((totalWidth - title_length) / 2) << "" << tours.title << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(field1Width) << std::left << "Country"
		<< std::setw(field2Width) << std::left << "City"
		<< std::setw(field3Width) << std::right << "Population"
		<< std::setw(field4Width) << std::right << "Price"
		<< std::endl;

	std::cout << std::setw(totalWidth)
		<< std::setfill('-')
		<< ""
		<< std::endl;   // display total_width dashes

	std::cout << std::setfill(' '); // reset setfill to blank spaces
	std::cout << std::setprecision(2) << std::fixed;                // for displaying the cost with 2 decimal digits

	// Note the use of the conditional operator to display the country name or "" for the first country

	for (Country country : tours.countries)
	{
		for (size_t i = 0; i < country.cities.size(); ++i)
		{
			std::cout << std::setw(field1Width) << std::left << ((i == 0) ? country.name : "") // conditional operator
				<< std::setw(field2Width) << std::left << country.cities.at(i).name
				<< std::setw(field3Width) << std::right << country.cities.at(i).population
				<< std::setw(field4Width) << std::right << country.cities.at(i).cost
				<< std::endl;
		}
	}


	system("pause");
	return 0;
}