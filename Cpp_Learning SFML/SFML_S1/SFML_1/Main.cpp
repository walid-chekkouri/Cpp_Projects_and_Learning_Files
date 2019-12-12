#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Mouse Events");

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

			case sf::Event::MouseButtonPressed: // a mouse button has been pressed
				//std::cout << "Mouse button has been pressed" << std::endl;

				switch (event.key.code)
				{
					case sf::Mouse::Left: // the left mouse button has been pressed
						std::cout << "Left Mouse button Pressed" << std::endl;
						break;
				}

				break;

			case sf::Event::MouseButtonReleased: // a mouse button has been released
				std::cout << "Mouse button has been Released" << std::endl;

				switch (event.key.code)
				{
				case sf::Mouse::Left: // the left mouse button has been released
					std::cout << "Left Mouse button Released" << std::endl; 
					break;
				}

				break;

			case sf::Event::MouseWheelMoved: // mouse wheel has been moving
				std::cout << "Mouse wheel Scrolled" << std::endl;
				std::cout << event.mouseWheel.delta << std::endl; // get the mouse wheel delta (Up, Down & speed)
				break;

			case sf::Event::MouseMoved: // mouse has moved
				//std::cout << "Mouse moved" << std::endl;
				//std::cout << "X axis: " << event.mouseMove.x << "| Y axis: " << event.mouseMove.y << std::endl;
				break;

			case sf::Event::MouseEntered: // mouse has entered the window
				std::cout << "Mouse has entered the window" << std::endl;
				break;

			case sf::Event::MouseLeft: // mouse has exited the window
				std::cout << "Mouse has left the window" << std::endl;
				break;
			}
		}


		window.clear();// Clearing the window
		//Ending the current frame
		window.display();
	}

	return 0;
}
