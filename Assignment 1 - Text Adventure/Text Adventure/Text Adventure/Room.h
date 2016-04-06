#pragma once
#include "Orc.h"
#include "OrcBoss.h"
#include "Goblin.h"
#include <vector>

class Player;
class Room
{
public:
	Room();
	~Room();

	virtual void command(MyString input, Player& player) = 0;

	virtual int& getLocation(int& location) = 0;

	void display();

	virtual void firstDisplay();
	virtual void secondDisplay();

protected:
	std::vector<Creature*> m_enemies;
	bool m_hasEntered;

};

