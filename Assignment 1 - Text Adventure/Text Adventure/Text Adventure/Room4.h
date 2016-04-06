#pragma once
#include "Room.h"
#include "Player.h"
class Room4 : public Room
{
public:
	Room4();
	~Room4();

	void command(MyString input, Player& player);

	virtual int& getLocation(int& location);

	void firstDisplay();
	void secondDisplay();

};

