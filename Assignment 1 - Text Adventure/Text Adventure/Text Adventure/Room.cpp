#include "Room.h"
#include "Player.h"


Room::Room()
{
}


Room::~Room()
{
}

void Room::display()
{
	if (m_hasEntered)
	{
		firstDisplay();
	}
	else
	{
		secondDisplay();
		m_hasEntered = true;
	}
}

void Room::firstDisplay()
{
}

void Room::secondDisplay()
{
}



