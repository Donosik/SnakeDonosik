#include "Food.h"

const int Food::height = 20;
const int Food::width = 20;

Food::Food()
	:form(sf::Vector2f(Food::width,Food::height))
{
	srand(time(NULL));
	form.setFillColor(sf::Color::Red);
	form.setPosition(50,50);
}

Food::~Food()
{

}

void Food::Draw(sf::RenderWindow &mainWindow)
{
	mainWindow.draw(form);
}

void Food::Random(int windowHeight, int windowWidth)
{
	yPosition = rand() % (windowWidth / 20) * 20;
	xPosition = rand() % (windowHeight / 20) * 20;
	form.setPosition(xPosition, yPosition);
}