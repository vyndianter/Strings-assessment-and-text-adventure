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
//changed to player& instead of character*
void Orc::Damage(Player& enemy)
{
	Creature::Damage(enemy);
}
