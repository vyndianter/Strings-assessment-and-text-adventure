#include "OrcBoss.h"



OrcBoss::OrcBoss()
{
	m_name = "Orc Raid Leader";
	m_damage = 13;
	m_health = 100;
}

OrcBoss::~OrcBoss()
{
}

void OrcBoss::Damage(Creature * enemy)
{
		Orc::Damage(enemy);
}




