#include "Game.h"

int Game::width = 800;
int Game::height = 600;
const sf::Time Game::FPSLimit = sf::seconds(1.f/10.f);

Game::Game()
	:mainWindow(sf::VideoMode(Game::width,Game::height,32),"Snake")
{
	mainWindow.setFramerateLimit(60);
	gamestatus = GAME;
	food.Random(Game::height, Game::width);
}

Game::~Game()
{

}

void Game::Start()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	while (mainWindow.isOpen())
	{
		sf::Time delta = clock.restart();
		timeSinceLastUpdate += delta;
		HandleInputs();
		while (timeSinceLastUpdate > Game::FPSLimit)
		{
			timeSinceLastUpdate -= FPSLimit;
			snake.Move();
			CollisionManager::Collision(food,snake);
		} //while()

		Draw();
	} //while()
}

void Game::HandleInputs()
{
	sf::Event event;
	while (mainWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			mainWindow.close();
		}
		snake.HandleInputs(event);
	}//while()
}

void Game::Draw()
{
	mainWindow.clear(sf::Color(0, 0, 0, 0));
	food.Draw(mainWindow);
	snake.Draw(mainWindow);
	mainWindow.display();
}