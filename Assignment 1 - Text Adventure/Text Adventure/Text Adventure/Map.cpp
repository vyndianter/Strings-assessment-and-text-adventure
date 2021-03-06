#include "Map.h"
#include "Spawn.h"
#include "Room1.h"
#include "Room2.h"
#include "Room3.h"
#include "Room4.h"
#include "Room.h"
#include "Player.h"
Map::Map()
{
	m_locations.push_back(new Spawn());
	m_locations.push_back(new Room1());
	m_locations.push_back(new Room2());
	m_locations.push_back(new Room3());
	m_locations.push_back(new Room4());
	
	m_location = 0;
}


Map::~Map()
{
}

void Map::command(MyString input, Player & player)
{
	m_locations[m_location]->command(input, player);
}

void Map::display()
{
	m_locations[m_location]->display();
}

int& Map::getLocation()
{
	return m_location;
}


