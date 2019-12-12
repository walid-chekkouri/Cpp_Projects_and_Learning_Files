#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Live Input");

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


			}
		}
		// Live input events are outside the pollEvent loop (faster) every single frame

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			std::cout << "Space button clicked: " << std::endl;
			;
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			std::cout << "Mouse left button clicked: " << std::endl;
			;
		}

		if (sf::Joystick::isConnected(0)) //player1's joystick is connected?
		{
			//std::cout << "Joystick is connected" << std::endl;
		}

		std::cout << sf::Joystick::ButtonCount << std::endl;// number of buttons this controller has

		if (sf::Joystick::isButtonPressed(0,1))// (controller, button) // button 1 is clicked
		{
			std::cout << "Button 1 is pressed" << std::endl;
		}

		//std::cout << sf::Mouse::getPosition().x << std::endl;// position relative to the screen not the window
		//std::cout << sf::Mouse::getPosition(window).x << std::endl;// position relative to our window

	


		window.clear();// Clearing the window
		//Ending the current frame
		window.display();

	}

	return 0;
}
