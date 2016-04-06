#pragma once
#include "Room.h"
#include "Player.h"
class Room3 : public Room
{
public:
	Room3();
	~Room3();

	void command(MyString input, Player& player);

	virtual int& getLocation(int& location);

	void firstDisplay();
	void secondDisplay();

};

