#pragma once
#include "Creature.h"

class Goblin : public Creature
{
public:
	Goblin();
	~Goblin();
	virtual void Damage(Creature* enemy);

};