#include "Room1.h"



Room1::Room1()
{
	m_enemies.push_back(new Goblin());
}


Room1::~Room1()
{
}

void Room1::command(MyString input, Player& player)
{
	//make more clear what you need to type to attack
	std::cout << "What will you do? ('Attack' or 'move (up, down, left or right)')\n";
	if (input.toLower().subString("attack") != nullptr)
	{
		if (m_enemies.size() > 0)
		{
			if (input.toLower().subString("goblin"))
			{
				m_enemies[0]->Damage(player);
				if (m_enemies[0]->ifDead())
				{
					m_enemies.erase(m_enemies.begin(), m_enemies.begin() + 1);
				}
			}
			else
			{
				std::cout << "There is no enemy known as " << input << '\n';
			}
		}
		else
		{
			std::cout << "There is no enemies that you can attack!\n";
		}
	}
	else if (input.toLower().subString("move") != nullptr)
	{
		if (input.toLower().subString("up") != nullptr)
		{
			player.getLocation() = 2;
			player.display();
		}
		else if (input.toLower().subString("down") != nullptr)
		{
			player.getLocation() = 0;
			display();
		}
		else if (input.toLower().subString("left") != nullptr || input.toLower().subString("right") != nullptr)
		{
			std::cout << "There is a wall that you cannot pass through!\n";
		}
		else
		{
			std::cout << "There is no direction known as " << input << "\n";
		}
	}
}


void Room1::firstDisplay()
{
	std::cout << "You walk into a room, almost identical to the\none you were just in.\nA lone Goblin guards the next door\n";
}

void Room1::secondDisplay()
{
	std::cout << "The room has not changed and the slain\nGoblin lay on th ground motionless\n";
}
