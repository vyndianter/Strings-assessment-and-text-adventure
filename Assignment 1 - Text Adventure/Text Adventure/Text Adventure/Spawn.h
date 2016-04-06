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


	void firstDisplay();
	void secondDisplay();

};

