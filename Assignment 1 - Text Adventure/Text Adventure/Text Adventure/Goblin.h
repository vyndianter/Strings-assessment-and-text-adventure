#pragma once
#include "Player.h"
class Goblin : public Creature
{
public:
	Goblin();
	~Goblin();
	virtual void Damage(Player& enemy);

};