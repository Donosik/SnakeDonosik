#pragma once
#include "CollisionManager.h"

enum Gamestatus
{
	GAME,GAMEOVER
};

class Game
{
public:
	Game();
	virtual ~Game();

	static int width;
	static int height;
	
	void Start(); //Funkcja uruchamiaj¹ca grê
	void HandleInputs(); //Obs³uga klawiszy ,sterowanie itp.
	void Draw(); //G³ówna funkcja rysuj¹ca okno

private:
	sf::RenderWindow mainWindow; //Okno g³ówne
	static const sf::Time FPSLimit; //Limit klatek na sekunde
	Gamestatus gamestatus;
	Food food;
	Snake snake;

};

