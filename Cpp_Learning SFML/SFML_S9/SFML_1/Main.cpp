#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML");

	sf::CircleShape circle(150);
	circle.setRadius(200);

	circle.setPointCount(200);
	/*circle.setFillColor(sf::Color::Magenta);
	circle.setOutlineThickness(30);
	circle.setOutlineColor(sf::Color(255, 155, 155, 155));*/

	sf::Texture texture;
	texture.loadFromFile("golden.jpg");
	circle.setTexture(&texture);
	circle.setTextureRect(sf::IntRect(0, 0, 200, 405));


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


		window.clear();// Clearing the window
		window.draw(circle);
		//Ending the current frame
		window.display();

	}

	return 0;
}
