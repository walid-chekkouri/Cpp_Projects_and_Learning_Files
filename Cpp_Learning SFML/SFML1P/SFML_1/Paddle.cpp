#include "Paddle.h"
#include <iostream>
#include "Config.h"

Paddle::Paddle(double y)
{
	rectangle.setPosition((WINDOW_WIDTH / 2) - 50, y);
	rectangle.setSize(sf::Vector2f(100, 10));
	rectangle.setOutlineThickness(1);
	rectangle.setOutlineColor(sf::Color::Green);
	rectangle.setFillColor(sf::Color::Cyan);
	rectangle.setOutlineThickness(1);
	paddle_half_size = rectangle.getSize().x / 2;
}
void Paddle::updatePosition(double x)
{
	if (x > paddle_half_size && x < WINDOW_WIDTH - paddle_half_size)
		rectangle.setPosition(x - paddle_half_size, rectangle.getPosition().y);
}
void Paddle::updatePositionDelta(double delta)
{
	updatePosition(rectangle.getPosition().x + delta + paddle_half_size);
}
void Paddle::draw(sf::RenderTarget& target)
{
	target.draw(rectangle);
}
sf::FloatRect Paddle::getBoundingBox() const
{
	return rectangle.getGlobalBounds();
}
