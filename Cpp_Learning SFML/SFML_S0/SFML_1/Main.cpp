#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");

	//As long as the window is open do this
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				//Close the window
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed: // A key is pressed
				//std::cout << "Key has been pressed" << std::endl; 

				switch (event.key.code)
				{
				case sf::Keyboard::A:  // A is the key being pressed
					std::cout << "A_P" << std::endl;
					break;
				}
				break;
			case sf::Event::KeyReleased:
				//std::cout << "Key has bee released" << std::endl;
				switch (event.key.code)
				{
				case sf::Keyboard::A:
					std::cout << "A_R" << std::endl;
					break;
				}
			}
		}


		window.clear(sf::Color::Blue);// Clearing the window with the blue color


		//Ending the current frame
		window.display();
	}

	return 0;
}
