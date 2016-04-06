#pragma once
#include "Orc.h"
class Player;
class OrcBoss : public Orc
{
public:
	OrcBoss();
	~OrcBoss();
	//changed to player& instead of character*
	virtual void Damage(Player& enemy);

	

};