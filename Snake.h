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

	void Move(); //Funkcja ubs�uguj�ca poruszanie si�
	void HandleInputs(sf::Event &); //Sterowanie w�em
	void Draw(sf::RenderWindow &); //Rysowanie w�a
	void Grow(); //Powi�kszanie w�a

	MoveStatus moveStatus;
	std::vector<sf::RectangleShape>forms;

	friend class CollisionManager;
};

