#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
using namespace std;

int main(){

	cout << "This is a test to open a new window, POP! \n";

	sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Window", sf::Style::Close | sf::Style::Resize);//creating a window
	sf::Event myEvent;
	sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));// Creating a rectangle with a vector that contains 2 floats, X and Y
	player.setFillColor(sf::Color::Red);// Change the rectangle color
	player.setOrigin(50.0f, 50.0f);// set the origin of our shape to the center.50= 100 (size of the shape)\2
	player.getScale();


	while (window.isOpen())//as the window is still open
	{
		
		while (window.pollEvent(myEvent))
		{
			switch (myEvent.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::Resized:
				//cout <<"Width: " <<myEvent.size.width <<" Height: "<< myEvent.size.height << endl;// when the window is resized=>show its new size
				printf("\n Window Width: %i Window Height: %i", myEvent.size.width, myEvent.size.height);
				break;
				
			case sf::Event::TextEntered:
				if (myEvent.text.unicode<128)//128 is the range of ASCI
				{
					printf("%c", myEvent.text.unicode);
				}
		
				
			}

		}

		// KeyBoard Input
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.move(-0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.move(0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.move(0.0f, -0.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0.0f, 0.1f);
		}

		sf::Vector2i mousePos = sf::Mouse::getPosition(window);// the position relative to the window rather than the screen.
		player.setPosition((float)mousePos.x, static_cast<float>(mousePos.y));

		window.clear(sf::Color::Blue);// to clear the background, instead of drawing on top of our canvas. We can also specify the background color. Black if not specified.
		window.draw(player);
		window.display();// display what we draw on the screen
	
	}

	return 0;
}