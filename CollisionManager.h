#pragma once
#include "Snake.h"
#include <Sfml/Graphics.hpp>

class CollisionManager
{
public:
	CollisionManager();
	virtual ~CollisionManager();

	static bool isFoodOnBody(Food&,Snake&); //funkcja sprawdzaj�ca czy jedzenie zespawni sie w w�u
	static void Collision(Food&, Snake&); //funkcja odpowiadajaca za kolizje i przejscia przez sciane
};

