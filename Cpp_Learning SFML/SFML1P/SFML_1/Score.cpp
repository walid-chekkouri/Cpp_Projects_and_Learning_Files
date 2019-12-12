#include "Score.h"
#include <iostream>
#include <sstream>

Score::Score(double x, double y, sf::Font& font)
{
	
	value = 0;
	texte.setStyle(sf::Text::Italic);
	texte.setFont(font);
	texte.setString("0");
	texte.setCharacterSize(50);
	texte.setPosition(x, y);
	texte.setFillColor(sf::Color::Blue);
}
void Score::draw(sf::RenderTarget& target)
{
	target.draw(texte);
}
void Score::increment()
{
	texte.setString(std::to_string(++value));
	
}
