#include "CollisionManager.h"

CollisionManager::CollisionManager()
{

}

CollisionManager::~CollisionManager()
{

}

bool CollisionManager::isFoodOnBody(Food &f, Snake &s)
{
	for (int i = 0; i < s.forms.size(); i++)
	{
		if (f.form.getPosition() == s.forms[i].getPosition())
		{
			return true;
		}
	}
	return false;
}

void CollisionManager::Collision(Food &f, Snake &s)
{
	for (int i = 0; i < s.forms.size(); i++)
	{
		if (f.form.getPosition() == s.forms[i].getPosition())
		{
			s.Grow();
			f.Random(800,640);
		}
	}
	
}
