#include "creature.h"

Creature::Creature()
{
}

Creature::~Creature()
{
}

void Creature::SetPlayerName(MyString & name)
{
	m_name = name;
}

MyString & Creature::GetPlayerName()
{
	return m_name;
}

void Creature::Damage(Creature * enemy)
{
	if (ifDead())
	{
		std::cout << m_name << " is dead and can not be atacked";
	}
	else
	{
		std::cout << m_name;
		std::cout << " took " << enemy->GetDamage();
		std::cout << " damage from " << enemy->GetPlayerName() << '\n';
		m_health -= enemy->GetDamage();
		if (m_health <= 0)
		{
			m_health = 0;
			std::cout << m_name << " has died!\n";
		} 
		else
		{ 
			std::cout << enemy->GetPlayerName();
			std::cout << " took " << m_damage;
			std::cout << " damage from " << m_name << '\n';
			enemy->GetHealth() -= m_damage;
			if (enemy->GetHealth() <= 0)
			{
				enemy->GetHealth() = 0;
				std::cout << "You Died! Game Over!\n";
				system("PAUSE");
			}
		}
	}
}

int Creature::GetDamage()
{
	return m_damage;
}

MyString & Creature::GetName()
{
	return m_name;
}

int& Creature::GetHealth()
{
	return m_health;
}


bool Creature::ifDead()
{
	return m_health <= 0;
}


