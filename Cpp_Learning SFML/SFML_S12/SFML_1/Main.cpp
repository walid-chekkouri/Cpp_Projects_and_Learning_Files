#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML");

	sf::VertexArray quad(sf::Quads, 4);
	quad[0].position = sf::Vector2f(5, 5);
	quad[1].position = sf::Vector2f(200, 5);
	quad[2].position = sf::Vector2f(200, 200);
	quad[3].position = sf::Vector2f(5, 200);

	sf::Texture texture;

	texture.loadFromFile("golden.jpg");

	quad[0].texCoords = sf::Vector2f(0, 0);
	quad[1].texCoords = sf::Vector2f(50, 0);
	quad[2].texCoords = sf::Vector2f(50, 100);
	quad[3].texCoords = sf::Vector2f(0, 100);

	sf::Transform tranform;
	tranform.rotate(45, sf::Vector2f(100, 100));

	sf::RenderStates states;
	states.transform = tranform;
	states.texture = &texture;

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
		//Ending the current frame
		window.draw(quad, states);
		window.display();

	}

	return 0;
}
