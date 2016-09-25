#pragma once
#include <ctime>
#include <cstdlib>
#include <SFML\Graphics.hpp>

class Food
{
public:
	Food();
	virtual ~Food();

	static const int height;
	static const int width;

	sf::RectangleShape form;
	int xPosition;
	int yPosition;

	void Draw(sf::RenderWindow &); //Funkcja rusyj¹ca w klasie Food
	void Random(int, int); //Funkcja tworz¹ca now¹ pozycje jedzenia
};

