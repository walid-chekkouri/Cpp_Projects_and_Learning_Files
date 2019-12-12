#include<iostream>
#include<map>
#include<string>

void showElements(std::map<int, std::string> &myMap)
{
	for (std::map<int, std::string>::iterator it = myMap.begin(); it != myMap.end(); it++)
	{
		std::cout << it->first << " => " << it->second << std::endl;
	}
}

int main(){

	std::map<int, std::string> myMap;

	myMap[1] = "Tom";
	myMap[2] = "John";
	myMap[3] = "Mark";
	myMap[4] = "Sam";
	myMap[5] = "Kenny"; //No duplicate keys allowed

	//myMap.clear();
	myMap.insert(std::pair<int, std::string>(6,"Jerry"));

	std::cout << "id 6 is for : " << myMap[6] << std::endl;

	std::map<int, std::string>::iterator it = myMap.find(5);
	std::cout << "Key found is for: " << it->second << std::endl;

	//myMap.erase(it);//delete element

	std::cout<<"Is  empty: "<<((myMap.empty())? "True": "False")<<std::endl;

	showElements(myMap);

	std::cout << "Map size: " << myMap.size() << std::endl;


	// remove all elements up to 
	// element with key=3 in gquiz2 
	std::cout << "\my map after removal of"
		" elements less than key=3 : \n";
	std::cout << "\tKEY\tELEMENT\n";
	myMap.erase(myMap.begin(), myMap.find(3));

	showElements(myMap);


	// lower bound and upper bound for map gquiz1 key = 4
	std::cout << "myMap.lower_bound(4) : "
		<< "\tKEY = ";
	std::cout << myMap.lower_bound(4)->first << '\t';
	std::cout << "\tELEMENT = "
		<< myMap.lower_bound(4)->second << std::endl;
	std::cout << "myMap.upper_bound(4) : "
		<< "\tKEY = ";
	std::cout << myMap.upper_bound(4)->first << '\t';
	std::cout << "\tELEMENT = "
		<< myMap.upper_bound(4)->second << std::endl;

	
	


	system("pause");
	return 0;
}

/*
-map upper_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’
or definitely will go after the element with key value ‘g’ in the map.

-map lower_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’
or definitely will not go before the element with key value ‘g’ in the map.
*/