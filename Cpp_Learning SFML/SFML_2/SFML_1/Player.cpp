#include "Player.h"


Player::Player(sf::Texture *texture, sf::Vector2u imageCount, float switchTime, float speed, float jumpHeight) :
animation(texture, imageCount,switchTime)
{
	
	this->speed = speed;
	this->jumpHeight = jumpHeight;
	row = 0;
	faceRight = true;

	body.setSize(sf::Vector2f(100.0f, 150.0f));
	body.setOrigin(body.getSize() / 2.0f);
	//player.setFillColor(sf::Color::Blue); coloring the player
	body.setPosition(206.0f, 206.0f);
	body.setTexture(texture); // apply the texture to the player
}


Player::~Player()
{
}

void Player::Update(float deltaTime)
{
	velocity.x = 0.0f;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		velocity.x -= speed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		velocity.x += speed;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && canJump)
	{
		canJump = false;
		velocity.y = -sqrtf(2.0f * 981.0f * jumpHeight); //Kinematic Equation: square root (2 * gravity * jumpHeight)
		//NB: 100 sfml unit=1 meter. so 9.81f=981.0f
	}
	
	// Implementing Gravity
	velocity.y += 981.0f * deltaTime;


	if (velocity.x == 0.0f)
	{
		row = 0;
	}
	else
	{
		row = 1;
		if (velocity.x > 0.0f)
			faceRight = true;
		else
			faceRight = false;
	}
	animation.Update(row, deltaTime, faceRight);
	body.setTextureRect(animation.uvRect);
	body.move(velocity*deltaTime);
}

void Player::Draw(sf::RenderWindow& window)
{
	//body.setFillColor(sf::Color::Red); Changing character Color.
	window.draw(body);
}

void Player::onCollision(sf::Vector2f direction)
{
	if (direction.x<0.0f)
	{
		//collision on the left side.
		velocity.x = 0.0f;
	}
	else if (direction.x > 0.0f)
	{
		//collision on the right side.
		velocity.x = 0.0f;
	}

	if (direction.y<0.0f)
	{
		//collision on the bottom side.
		velocity.y = 0.0f;
		canJump = true;
	}
	else if (direction.y > 0.0f)
	{
		//collision on the top side.
		velocity.y = 0.0f;
	}
}
