#include "Goblin.h"

Goblin::Goblin()
{
	m_name = "Goblin";
	m_damage = 3;
	m_health = 20;
}

Goblin::~Goblin()
{
}

void Goblin::Damage(Creature * enemy)
{
	if (rand() % 15 == 0)
	{
		std::cout << m_name << " dodges the attack with its nimble body!\n";
	}
	else
	{
		Creature::Damage(enemy);
	}
}
