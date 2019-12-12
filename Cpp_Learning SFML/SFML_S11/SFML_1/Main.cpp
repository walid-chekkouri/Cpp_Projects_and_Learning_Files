#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Live Keyboard Input");

	//Making free vertices
	sf::VertexArray lines(sf::LinesStrip, 3);
	lines[0].position = sf::Vector2f(50, 40);
	lines[0].color = sf::Color::Red;

	lines[1].position = sf::Vector2f(300, 50);
	lines[1].color = sf::Color::Green;

	lines[2].position = sf::Vector2f(200, 200);
	lines[2].color = sf::Color::Blue;


	sf::VertexArray trianglesStripe(sf::TrianglesStrip,4);
	trianglesStripe[0].position = sf::Vector2f(30, 50);
	trianglesStripe[0].color = sf::Color::Red;

	trianglesStripe[1].position = sf::Vector2f(200, 75);
	trianglesStripe[1].color = sf::Color::Magenta;

	trianglesStripe[2].position = sf::Vector2f(10, 200);
	trianglesStripe[2].color = sf::Color::Green;

	trianglesStripe[3].position = sf::Vector2f(500, 500);
	trianglesStripe[3].color = sf::Color::Cyan;


	sf::VertexArray trianglesFan(sf::TrianglesFan,4);

	trianglesFan[0].position = sf::Vector2f(300, 300);
	trianglesFan[0].color = sf::Color::Cyan;

	trianglesFan[1].position = sf::Vector2f(300, 50);
	trianglesFan[1].color = sf::Color::Magenta;

	trianglesFan[2].position = sf::Vector2f(450, 250);
	trianglesFan[2].color = sf::Color::Yellow;

	trianglesFan[3].position = sf::Vector2f(300, 300);
	trianglesFan[3].color = sf::Color::Red;

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
		//window.draw(lines);
		//window.draw(trianglesStripe);
		window.draw(trianglesFan);
		window.display();

	}

	return 0;
}
