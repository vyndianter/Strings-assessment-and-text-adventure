#pragma once
#include <vector>
#include "Room.h"


class Map
{
public:

	Map();
	~Map();

	void command(MyString input, Player& player);

	int& getLocation();

protected:
	std::vector<Room*> m_locations;
	int m_location;


};

