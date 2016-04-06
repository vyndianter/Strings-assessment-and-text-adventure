#pragma once
#include <vector>
class Room;
class MyString;
class Player;
class Map
{
public:

	Map();
	~Map();

	void command(MyString input, Player& player);
	//to call from location, move to .cpp
	void display();
	int& getLocation();

protected:
	std::vector<Room*> m_locations;
	int m_location;


};

