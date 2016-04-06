#include "Spawn.h"



Spawn::Spawn()
{
}


Spawn::~Spawn()
{
}

void Spawn::command(MyString input, Player& player)
{
	display();
	std::cout << "What will you do? ('Attack' or 'move (up, down, left or right)')\n";
	if (input.toLower().subString("attack") != nullptr)
	{
		std::cout << "There are no enemies in the room that you can attack!\n";
	}
	else if (input.toLower().subString("move") != nullptr)
	{
		if (input.toLower().subString("up") != nullptr)
		{
			player.getLocation() = 1;
		}
		else if (input.toLower().subString("left") != nullptr || input.toLower().subString("right") != nullptr || input.toLower().subString("down") != nullptr)
		{
			std::cout << "There is a wall that you cannot pass through!\n";
		}
		else
		{
			std::cout << "There is no direction known as " << input << "\n";
		}
	}
}

int & Spawn::getLocation(int& location)
{
	return location;
}

void Spawn::firstDisplay()
{
	std::cout << "After walking through the entrance of the dungeon you fall into a room.\nThe room is dimly lit from the torches hanging on the wall\nand you can see you stone brick walls.\nThe walls are visibly damp but there is no water around, nor can you here any\n";
}

void Spawn::secondDisplay()
{
	std::cout << "Nothing about the room has changed.\nYou can see the small hole you fell through";
}
