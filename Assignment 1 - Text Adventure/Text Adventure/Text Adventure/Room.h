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
	
	//Get rid of all of these, no need for them.


	void display();

	//made pure virtual, makes more sense.
	virtual void firstDisplay() = 0;
	virtual void secondDisplay() = 0;

protected:
	std::vector<Creature*> m_enemies;
	bool m_hasEntered;

};

