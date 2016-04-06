#pragma once
#include "Orc.h"

class OrcBoss : public Orc
{
public:
	OrcBoss();
	~OrcBoss();

	virtual void Damage(Creature* enemy);

	

};