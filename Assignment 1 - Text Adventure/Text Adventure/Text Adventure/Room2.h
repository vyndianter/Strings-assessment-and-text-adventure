#pragma once
#include "Room.h"
#include "Player.h"
class Room2 : public Room
{
public:
	Room2();
	~Room2();

	void command(MyString input, Player& player);


	void firstDisplay();
	void secondDisplay();

};

