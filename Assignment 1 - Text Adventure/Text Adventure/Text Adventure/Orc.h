#pragma once
//include player instead of creature
#include "Player.h"
class Orc : public Creature
{
public:
	Orc();
	~Orc();
	//changed to player& instead of character*
	virtual void Damage(Player& enemy);
};
