#include "Orc.h"
Orc::Orc()
{
	m_name = "Orc";
	m_health = 50;
	m_damage = 8;
}

Orc::~Orc()
{
}

void Orc::Damage(Creature * enemy)
{
	Creature::Damage(enemy);
}
