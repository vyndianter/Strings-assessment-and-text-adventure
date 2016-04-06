#pragma once
#include "Creature.h"
#include "Map.h"


class Player : public Creature
{
public:

	Player();
	~Player();
	
	virtual void Damage(Creature* enemy);

	void command(MyString input);

	int& getLocation();

	virtual int& GetHealth();

	virtual MyString GetPlayerName(MyString input);

	void changeKey();
	bool returnKey();

protected:
	bool m_key;
	Map m_map;
};