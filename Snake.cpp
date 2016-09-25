#include "Snake.h"

Snake::Snake()
	:Food()
{
	moveStatus = DOWN;
	Grow();
	forms[0].setPosition(100, 100);
}

Snake::~Snake()
{

}

void Snake::Move()
{
	int last = forms.size() - 1;
	sf::Vector2f position = forms[0].getPosition();
	sf::Vector2f newPosition=position;
	switch (moveStatus)
	{
	case UP:
	{
		newPosition.y = position.y - 20;
		forms[last].setPosition(newPosition);
	}
	break;
	case DOWN:
	{
		newPosition.y = position.y + 20;
		forms[last].setPosition(newPosition);
	}
	break;
	case LEFT:
	{
		newPosition.x = position.x - 20;
		forms[last].setPosition(newPosition);
	}
	break;
	case RIGHT:
	{
		newPosition.x = position.x + 20;
		forms[last].setPosition(newPosition);
	}
	break;
	}
}

void Snake::HandleInputs(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
	{
		switch (event.key.code)
		{
		case sf::Keyboard::Up:
		{
			if (moveStatus != DOWN)
			{
				moveStatus = UP;
			}
		}
		break;
		case sf::Keyboard::Down:
		{
			if (moveStatus != UP)
			{
				moveStatus = DOWN;
			}
		}
		break;
		case sf::Keyboard::Left:
		{
			if (moveStatus != RIGHT)
			{
				moveStatus = LEFT;
			}
		}
		break;
		case sf::Keyboard::Right:
		{
			if (moveStatus != LEFT)
			{
				moveStatus = RIGHT;
			}
		}
		break;
		}
	}
}

void Snake::Draw(sf::RenderWindow &mainWindow)
{
	for (int i = 0; i < forms.size(); i++)
	{
		mainWindow.draw(forms[i]);
	}
}

void Snake::Grow()
{
	forms.push_back(sf::RectangleShape(sf::Vector2f(Snake::width, Snake::height)));
}
