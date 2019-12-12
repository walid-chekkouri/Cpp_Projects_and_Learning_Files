#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Joystick Events");

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

			case sf::Event::JoystickConnected: // joystick is connected
				std::cout << "Joystick is connected, " << "ID: " << event.joystickConnect.joystickId << std::endl;
				break;

			case sf::Event::JoystickDisconnected: // joystick is disconnected
				std::cout << "Joystick is disconnected ! "<< std::endl;
				break;

			case sf::Event::JoystickButtonPressed: // joystick button is pressed
				std::cout << "Joystick button pressed: " << event.joystickButton.button << std::endl;
				break;

			case sf::Event::JoystickButtonReleased: // joystick button is released
				std::cout << "Joystick button released: " << event.joystickButton.button << std::endl;
				break;

			case sf::Event::JoystickMoved: //The joystick moved along an axis
				std::cout << "Joystick Moved, position is: " << event.joystickMove.position<<std::endl;
				break;
			}
		}


		window.clear();// Clearing the window
		//Ending the current frame
		window.display();
	}

	return 0;
}
