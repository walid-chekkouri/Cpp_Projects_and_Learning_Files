#include "Ball.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <random>
#include "Config.h"
#include "Windows.h"
Ball::Ball()
{
	texture.loadFromFile("ball_idl.png");
	sprite.setTexture(texture);

	restart();
}
void Ball::draw(sf::RenderTarget& target)
{
	//Affichage debug
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(WINDOW_WIDTH, HORIZONTAL_WALL_SIZE));
	rectangle.setFillColor(sf::Color(255, 0, 0, 0));
	rectangle.setPosition(0, WINDOW_HEIGHT - HORIZONTAL_WALL_SIZE);
	target.draw(rectangle);
	rectangle.setPosition(0, 0);
	target.draw(rectangle);

	sf::FloatRect dimensions(sprite.getGlobalBounds());
	rectangle.setSize(sf::Vector2f(dimensions.width, dimensions.height));
	rectangle.setPosition(dimensions.left, dimensions.top);
	target.draw(rectangle);
	//-----------------------------

	target.draw(sprite);
}
void Ball::checkWallCollisions()
{
	sf::FloatRect dimensions(sprite.getGlobalBounds());
	if (sprite.getPosition().x <= 0 || sprite.getPosition().x >= (WINDOW_WIDTH - dimensions.width)) setDirectionfromAngle(M_PI - angle);

}
void Ball::move()
{
	/*constexpr*/ int ball_speed(35);

	if (clock.getElapsedTime().asMilliseconds() >= ball_speed)
	{
		checkWallCollisions();
		sprite.move(speed);
		clock.restart();
	}
}
void Ball::setDirectionfromAngle(double angle)
{
	speed = sf::Vector2f(5 * cos(angle), -5 * sin(angle));
	this->angle = angle;
}
void Ball::paddleBounce()
{
	setDirectionfromAngle(-angle);
}
int Ball::out()
{
	if (sprite.getGlobalBounds().intersects(sf::FloatRect(0, 0, WINDOW_WIDTH, HORIZONTAL_WALL_SIZE))) return 1;
	else if (sprite.getGlobalBounds().intersects(sf::FloatRect(0, WINDOW_HEIGHT - HORIZONTAL_WALL_SIZE, WINDOW_WIDTH, HORIZONTAL_WALL_SIZE))) return 0;
	return -1;
}
void Ball::restart()
{
	sprite.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
	//std::uniform_real_distribution<double> unif(-M_PI/4, M_PI/4);
	angle = -M_PI / 4;
	//angle=unif(rand);
	setDirectionfromAngle(angle);
}
sf::FloatRect Ball::getBoundingBox() const
{
	return sprite.getGlobalBounds();
}

