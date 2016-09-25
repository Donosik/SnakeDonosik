#pragma once
#include "Food.h"
#include <vector>

enum MoveStatus
{
	UP,DOWN,LEFT,RIGHT
};

class Snake :
	public Food
{
public:
	Snake();
	virtual ~Snake();

	void Move(); //Funkcja ubs³uguj¹ca poruszanie siê
	void HandleInputs(sf::Event &); //Sterowanie wê¿em
	void Draw(sf::RenderWindow &); //Rysowanie wê¿a
	void Grow(); //Powiêkszanie wê¿a

	MoveStatus moveStatus;
	std::vector<sf::RectangleShape>forms;

	friend class CollisionManager;
};

