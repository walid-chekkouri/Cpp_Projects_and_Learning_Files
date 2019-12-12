#include <SFML/Graphics.hpp>

#ifndef SCORE_H
#define SCORE_H

class Score
{
private:
	int value;
	sf::Text texte;
public:
	bool Boy;
	Score(double x, double y, sf::Font& font);
	void draw(sf::RenderTarget& target);
	void increment();
};
#endif
