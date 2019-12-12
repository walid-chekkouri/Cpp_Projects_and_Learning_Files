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
	sf::Sprite sprite(texture); //Creating a sprite containing our texture ,same as sf::Sprite sprite(); sprite.setTexture(texture)
	sprite.setTextureRect(sf::IntRect(0,0,550,800));
	sprite.setScale(0.5f, 0.5f); //change the sprite scale
	sprite.setColor(sf::Color(0,255,0,100)); //change sprite color & opacity(0-255)
	sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x*0.5, sprite.getTexture()->getSize().y*0.5)); //the origin is the center of the sprite

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
		window.draw(sprite);//drawing our sprite to the window
		//Ending the current frame
		window.display();

	}

	return 0;
}
