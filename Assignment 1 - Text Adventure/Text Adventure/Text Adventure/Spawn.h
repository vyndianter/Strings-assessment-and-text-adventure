#pragma once
#include "Room.h"
#include "Player.h"
#include "MyString.h"
class Spawn : public Room
{
public:
	Spawn();
	~Spawn();

	void command(MyString input, Player& player);

	virtual int& getLocation(int& location);

	void firstDisplay();
	void secondDisplay();

};

