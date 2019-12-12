#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	//Creating a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML");

	sf::Vertex point;
	point.position = sf::Vector2f(300, 300);
	point.color = sf::Color::Blue;
	// Creating a Line
	sf::VertexArray line(sf::Lines,2);
	line[0].position = sf::Vector2f(200, 150);
	line[0].color = sf::Color::Red;
//	line[1].position = sf::Vector2f(400, 80);
//	line[1].color = sf::Color::Green;

	line[1] = point;
	// Creating a LTriangle
	sf::VertexArray triangle(sf::Triangles, 3);
	triangle[0].position = sf::Vector2f(20, 50);
	triangle[0].color = sf::Color::Yellow;

	triangle[1].position = sf::Vector2f(70, 250);
	triangle[1].color = sf::Color::White;

	triangle[2].position = sf::Vector2f(10, 250);
	triangle[2].color = sf::Color::Blue;

	// Creating a Quad

	sf::VertexArray quad(sf::Quads, 4);
	quad[0].position = sf::Vector2f(40, 50);
	quad[0].color = sf::Color::Yellow;

	quad[1].position = sf::Vector2f(80, 50);
	quad[1].color = sf::Color::Red;

	quad[2].position = sf::Vector2f(90, 200);
	quad[2].color = sf::Color::Blue;

	quad[3].position = sf::Vector2f(10, 1500);
	quad[3].color = sf::Color::Green;

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
		//window.draw(line);
		//window.draw(triangle);
		window.draw(quad);
		window.display();

	}

	return 0;
}
