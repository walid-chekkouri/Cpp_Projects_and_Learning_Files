#include <SFML/Graphics.hpp>

#ifndef PADDLE_H
#define PADDLE_H

class Paddle
{
private:
	sf::RectangleShape rectangle;
	int paddle_half_size;
public:
	Paddle(double y);
	void updatePosition(double x);
	void updatePositionDelta(double delta);
	void draw(sf::RenderTarget& target);
	sf::FloatRect getBoundingBox() const;
};
#endif
