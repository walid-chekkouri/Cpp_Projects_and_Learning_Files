#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Window Events");

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

			case sf::Event::Resized: // when window is resized

				// Same as: std::cout << "New X: " << window.getSize().x << "New Y: " << window.getSize().y << std::endl;
				std::cout << "New X: " << event.size.width << "New Y: " << event.size.height << std::endl;
				break;
			case sf::Event::GainedFocus: // when window gains focus
				std::cout << "Gained focus" << std::endl;
				break;

			case sf::Event::LostFocus: //when window loses focus
				std::cout << "Lost focus" << std::endl;
				break;

			}
		}


		window.clear();// Clearing the window
		//Ending the current frame
		window.display();

	}

	return 0;
}
