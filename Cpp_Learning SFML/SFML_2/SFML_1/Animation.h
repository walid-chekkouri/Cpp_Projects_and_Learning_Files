#pragma once
#include <sfml\Graphics.hpp>

class Animation
{
	//functions
public:
	Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime);
	~Animation();

private:

	//variables
public:

	sf::IntRect uvRect;// specifies what area of the texture we want to display.
	void Update(int row, float deltaTime, bool faceRight);

private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime, switchTime;


};

