#pragma once
#include "Creature.h"

class Orc : public Creature
{
public:
	Orc();
	~Orc();
	virtual void Damage(Creature* enemy);
};
