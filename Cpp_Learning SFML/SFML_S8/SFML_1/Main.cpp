#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<string>


int main(){
	
	sf::RenderWindow window(sf::VideoMode(800, 600), "Sprites");//Creating a window
	sf::Texture texture;//creating a texture
	//texture.isRepeated(true);; repeat texture when rect is larger than the texture// we can use it for a grasss repeated texture or water

	if (!texture.loadFromFile("Sonic.png")) //load image as texture
	{
		std::cout << "Error Loading Image !" << std::endl;
	}
	
	
	sf::ConvexShape shape;
	shape.setPointCount(6);
	
		shape.setPoint(0, sf::Vector2f(40 , 70));
		shape.setPoint(1, sf::Vector2f(60, 70));
		shape.setPoint(2, sf::Vector2f(200, 200));
		shape.setPoint(3, sf::Vector2f(360, 40));
		shape.setPoint(4, sf::Vector2f(300, 4500));
		shape.setPoint(5, sf::Vector2f(400, 500));

		sf::RectangleShape line;
		line.setSize(sf::Vector2f(200, 3));
		
		sf::Vertex line2[]=
		{
			sf::Vertex(sf::Vector2f(25, 10)),
			sf::Vertex(sf::Vector2f(400, 100))
		};
	
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
	 //rotating the sprite relatively to its current rotation (NB: rotation is around the origin point)
		window.clear();// Clearing the window
	
		window.draw(shape);
		window.draw(line2,2,sf::Lines);
		//Ending the current frame
		window.display();

	}

	return 0;
}
