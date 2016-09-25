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
	
	void Start(); //Funkcja uruchamiaj�ca gr�
	void HandleInputs(); //Obs�uga klawiszy ,sterowanie itp.
	void Draw(); //G��wna funkcja rysuj�ca okno

private:
	sf::RenderWindow mainWindow; //Okno g��wne
	static const sf::Time FPSLimit; //Limit klatek na sekunde
	Gamestatus gamestatus;
	Food food;
	Snake snake;

};

