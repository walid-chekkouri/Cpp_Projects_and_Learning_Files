#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<vector>
#include "Player.h"
#include "Platform.h"
using namespace std;

static const float VIEW_HEIGHT = 512.0f;
void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);
}

int main(){

	cout << "Game On \n";

	sf::RenderWindow window(sf::VideoMode(512, 512), "Let's Play", sf::Style::Close | sf::Style::Resize);//creating a window
	sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

	sf::Texture playerTexture;// create a texture
	playerTexture.loadFromFile("tux_from_linux.png");// load the image.

	Player player(&playerTexture, sf::Vector2u(3, 9), 0.3f,100.0f, 200.0f);

	std::vector<Platform> platforms;

	platforms.push_back(Platform(nullptr, sf::Vector2f(400.0f, 200.0f), sf::Vector2f(500.0f, 200.0f)));
	platforms.push_back(Platform(nullptr, sf::Vector2f(400.0f, 200.0f), sf::Vector2f(500.0f, 0.0f)));
	platforms.push_back(Platform(nullptr, sf::Vector2f(1000.0f, 200.0f), sf::Vector2f(500.0f, 500.0f)));
	
	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen())//as the window is still open
	{
		deltaTime= clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		sf::Event myEvent;
		while (window.pollEvent(myEvent))
		{
			switch (myEvent.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::Resized:
				ResizeView(window, view);
				break;
				
			}

		}
		
		player.Update(deltaTime);

		sf::Vector2f direction;

		for (Platform& platform : platforms)// same as: for(int i=0;i < platforms.size();i++){Platform& platform=platforms[i];}
			if (platform.getCollider().checkCollision(player.getCollider(), direction, 10.f))
				player.onCollision(direction);


		view.setCenter(player.getPosition());

		window.clear(sf::Color(220, 20, 60));// to clear the background, instead of drawing on top of our canvas. We can also specify the background color. Black if not specified.
		window.setView(view);
		player.Draw(window);
	
		

		
	
		for (Platform& platform : platforms)
			platform.Draw(window);

		window.display();// display what we draw on the screen

		
	
	}

	return 0;
}