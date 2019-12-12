#include "Animation.h"


Animation::Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime)
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	this->totalTime = 0.0f;
	currentImage.x = 0;
	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);
}


Animation::~Animation()
{
}

void Animation::Update(int row, float deltaTime, bool faceRight)
{
	currentImage.y = row;
	totalTime += deltaTime;

	if (totalTime >= switchTime)// when reaching the end time of an animation then let's switch to the next one.
	{
		totalTime -= switchTime;// take a step back to reinitialize time for the new animation.
		currentImage.x++; // next animation (from the same row).

		if (currentImage.x >= imageCount.x)// repeat the animation when it finishes
		{
			currentImage.x = 0;
			uvRect.width = abs(uvRect.width);
		}
	}
	
	uvRect.top = currentImage.y*uvRect.height;
	if (faceRight)
	{
		uvRect.left = currentImage.x * abs(uvRect.width);
		uvRect.width = abs(uvRect.width);// Important to use the abs() to not switch from - to + everytime we change it.
	}
	else{
		uvRect.left = (currentImage.x +1) * abs(uvRect.width);
		uvRect.width = -abs(uvRect.width);// Important to use the abs() to not switch from - to + everytime we change it.
	}
}
