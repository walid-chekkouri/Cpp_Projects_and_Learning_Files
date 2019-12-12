

#ifndef BALL_H
#define BALL_H

#include <SFML/Graphics.hpp>
#include <random>

class Ball
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f speed;
	sf::Clock clock;
	double angle;

	void checkWallCollisions();

	std::mt19937 rand;

public:
	Ball();
	void draw(sf::RenderTarget& target);
	void move();

	void setDirectionfromAngle(double angle);
	void paddleBounce();
	void restart();
	sf::FloatRect getBoundingBox() const;
	int out();


};

#endif
