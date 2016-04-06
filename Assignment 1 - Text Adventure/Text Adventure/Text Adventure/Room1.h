#pragma once
#include "Room.h"
#include "Goblin.h"
#include "Player.h"
class Room1 : public Room
{
public:
	Room1();
	~Room1();


	void command(MyString input, Player& player);



	void firstDisplay();
	void secondDisplay();

};

