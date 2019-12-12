#include <sfml\Graphics.hpp>//including the SFML library
#include<iostream>
#include<windows.h>
#include <stdio.h> 
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){

	cout << "This is a test to open a new window, POP! \n";

	sf::RenderWindow window(sf::VideoMode(512, 512), "Mouse Killer", sf::Style::Close | sf::Style::Resize);//creating a window
	sf::Event myEvent;

	sf::Texture texture;
	texture.loadFromFile("mallet.png");
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setScale(0.5f, 0.5f);
	sprite.setOrigin(sprite.getTexture()->getSize().x*0.5, sprite.getTexture()->getSize().y*0.3);

	sf::Texture textureM;
	textureM.loadFromFile("mouse.png");
	sf::Sprite spriteM;
	spriteM.setTexture(textureM);
	spriteM.setScale(0.5f, 0.5f);
	spriteM.setOrigin(spriteM.getTexture()->getSize().x*0.5, spriteM.getTexture()->getSize().y*0.3);

	srand(time(NULL));

	int min = 10;
	int max = 500;
	int numx = 0;
	int numy = 0;
	sf::Clock clock; 
	int score = 0;
	float dif = 2.0f;

	int minC = 0;
	int maxC = 255;
	int numC1 = 0;
	int numC2 = 0;


	std::cout << "Choose level of difficulty:" << endl;
	std::cin >> dif;



	while (window.isOpen())//as the window is still open
	{
		
		while (window.pollEvent(myEvent))
		{
			switch (myEvent.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::MouseButtonPressed:
				if (myEvent.mouseButton.button == sf::Mouse::Left)
				{
					double delta = 50;//tolerance
					if ((abs((sprite.getPosition().x) - spriteM.getPosition().x) <delta) && (abs((sprite.getPosition().y) - spriteM.getPosition().y) <delta))
					{
						sprite.setRotation(-50);
						std::cout<<"Yes"<<std::endl;
						window.clear(sf::Color::Blue);
						window.draw(sprite);
						window.display();
						Sleep(300);
						sprite.setRotation(0);
						window.clear(sf::Color::Blue);
						window.draw(sprite);
						window.display();
						numx = (min + (rand() % (int)(max - min + 1)));
						numy = (min + (rand() % (int)(max - min + 1)));
						spriteM.setPosition(numx, numy);
						clock.restart();
						std::cout << "Score: " << score++ << std::endl;

					}
					else{
						
					
						std::cout << "Oops!" << std::endl;
						std::cout <<"Score: "<< score-- << std::endl;


					}
					
				}	
				break;
			}
		}

		sf::Time elapsed1 = clock.getElapsedTime();
		if (elapsed1.asSeconds()>=dif){
			numx = (min + (rand() % (int)(max - min + 1)));
			numy = (min + (rand() % (int)(max - min + 1)));
			spriteM.setPosition(numx, numy);

			numC1 = (minC + (rand() % (int)(maxC - minC + 1)));
			numC2 = (minC + (rand() % (int)(maxC - minC + 1)));
			spriteM.setColor((sf::Color(100, numC1, numC2, 255)));
			clock.restart();
		}
	
		

		sf::Vector2i mousePos = sf::Mouse::getPosition(window);// the position relative to the window rather than the screen.
		sprite.setPosition((float)mousePos.x, static_cast<float>(mousePos.y));

		window.clear(sf::Color::Blue);// to clear the background, instead of drawing on top of our canvas. We can also specify the background color. Black if not specified.
		window.draw(sprite);
		window.draw(spriteM);
		window.display();// display what we draw on the screen
	
	}

	return 0;
}