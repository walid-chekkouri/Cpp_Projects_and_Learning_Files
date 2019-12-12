#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
#include "Paddle.h"
#include "Ball.h"
#include "Score.h"
#include "Config.h"
#include <time.h> 
#include <windows.h> 
#include<SFML/Audio.hpp>
sf::Color textColoring();
int main()
{

	sf::SoundBuffer buffer;
	buffer.loadFromFile("bgSound.wav");

	sf::Sound sound;
	sound.setBuffer(buffer);
	sound.setLoop(true);
	sound.play();

	sf::Texture textureBoy;
	textureBoy.loadFromFile("Boy_idl.png");
	sf::Sprite boy(textureBoy);

	sf::Texture textureGirl;
	textureGirl.loadFromFile("Girl_Idl.png");
	sf::Sprite girl(textureGirl);
	girl.setPosition(710, 475);
		
		
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Pong Game");

	//Chargement fonte
	sf::Font font;
	if (!font.loadFromFile("arial.ttf")) return EXIT_FAILURE;
	//Scores
	std::array<Score, 2> scores =
	{
		Score(WINDOW_WIDTH - 50, 0, font),
		Score(10, WINDOW_HEIGHT - 60, font)
	};

	//Titre
	sf::Text titre("Jeu Pong", font, 150);
	
	//titre.setColor(sf::Color(255, 255, 255, 50));
	//titre.setColor(sf::Color::Red);// ERROR 1
	titre.setPosition(70, 200);
	titre.setStyle(sf::Text::Bold);
	//Paddles
	Paddle top(10);
	Paddle bottom(580);
	//Balle
	Ball ball;

	while (window.isOpen())
	{
		//Evénements
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			//Déplacement souris->déplacement paddle supérieur
			else if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Left) top.updatePositionDelta(-25);
				else if (event.key.code == sf::Keyboard::Right) top.updatePositionDelta(25);

				if (event.key.code == sf::Keyboard::A) bottom.updatePositionDelta(-25);
				else if (event.key.code == sf::Keyboard::D) bottom.updatePositionDelta(25);
			}
			//Touches directionnelles->déplacement paddle inférieur
			

				
			
		}

		//Mouvement balle
		ball.move();
		//Collision balle-paddles
		if (top.getBoundingBox().intersects(ball.getBoundingBox()) || bottom.getBoundingBox().intersects(ball.getBoundingBox()))
		{
			ball.paddleBounce();
		}
		//Game over
		int out(ball.out());
		if (out >= 0)
		{
			
			scores[out].increment();
			ball.restart();
			switch (out){
			case 0:
			
				textureBoy.loadFromFile("Boy_won.png");
				boy.setTexture(textureBoy);

				textureGirl.loadFromFile("Girl_Lost.png");
				girl.setTexture(textureGirl);

				window.draw(girl);
				window.draw(boy);
				window.display();
				Sleep(800);

				textureBoy.loadFromFile("Boy_idl.png");
				boy.setTexture(textureBoy);

				textureGirl.loadFromFile("Girl_Idl.png");
				girl.setTexture(textureGirl);
				std::cout << "Boy won" << std::endl;

				

				break;
			case 1:
				
				textureGirl.loadFromFile("Girl_Won.png");
				girl.setTexture(textureGirl);

				textureBoy.loadFromFile("Boy_Lost.png");
				boy.setTexture(textureBoy);

				window.draw(boy);
				window.draw(girl);
				window.display();
				Sleep(800);
			
				textureGirl.loadFromFile("Girl_Idl.png");
				girl.setTexture(textureGirl);

				textureBoy.loadFromFile("Boy_idl.png");
				boy.setTexture(textureBoy);

				std::cout << "Girl won" << std::endl;
				
				break;
			}

		}

		//Dessin
		titre.setFillColor(textColoring());
		window.clear(sf::Color(238, 130, 238));
		//Titre
		
		
		
		window.draw(titre);
		window.draw(boy); window.draw(girl);
		//Scores
		for (int i(0); i < 2; i++) scores[i].draw(window);
		//Paddles
		top.draw(window);
		bottom.draw(window);
		//Balle
		ball.draw(window);

		

		window.display();
	}
	system("pause");
	return EXIT_SUCCESS;
}


sf::Color textColoring()
{
	sf::Color col(sf::Color::Blue);
	int v1 = rand() % 5;
	
	switch (v1)
	{
	case 0:
		col=sf::Color::Red;
			break;
	case 1:
		col = sf::Color::Blue;
		break;
	case 2:
		col = sf::Color::Green;
		break;
	case 3:
		col = sf::Color::Yellow;
		break;
	case 4:
		col = sf::Color::Magenta;
		break;
	}

	return col;
}