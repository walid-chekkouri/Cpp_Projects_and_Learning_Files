#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Text Events");

	//As long as the window is open do this
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				
			case sf::Event::Closed:// Close the window
				window.close();
				break;

			case sf::Event::TextEntered:
				std::cout << "Text has been entered: " <<std::endl;

				if (event.text.unicode==65)
				{
					std::cout << "Capital A has been clicked" << std::endl;
				}

				break;

			}
		}


		window.clear();// Clearing the window
		//Ending the current frame
		window.display();

	}

	return 0;
}
