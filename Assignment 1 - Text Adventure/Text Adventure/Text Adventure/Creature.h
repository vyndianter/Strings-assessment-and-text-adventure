#pragma once
#include "MyString.h"
class Player;
class Creature
{
public:

	Creature();
	~Creature();

	void SetPlayerName(MyString& name);
	//no need
	/*MyString& GetPlayerName();*/

	virtual void Damage(Player& enemy);

	int GetDamage();

	virtual int& GetHealth();

	virtual MyString& GetName();

	bool ifDead();

	//Most of these variables and functions should be fairly self explanatory due to the name

protected:
	int m_damage;
	int m_health;
	MyString m_name;
};