#include "Room3.h"



Room3::Room3()
{
	m_enemies.push_back(new Orc());
	m_enemies.push_back(new Goblin());
}



Room3::~Room3()
{
}

void Room3::command(MyString input, Player & player)
{
	std::cout << "What will you do? ('Attack' or 'move (up, down, left or right)')\n";
	if (input.toLower().subString("attack") != nullptr)
	{
		if (m_enemies.size() > 0)
		{
			if (input.toLower().subString("goblin"))
			{
				m_enemies[0]->Damage(&player);
				if (m_enemies[0]->ifDead())
				{
					m_enemies.erase(m_enemies.begin(), m_enemies.begin() + 1);
				}
			}
			else if (input.toLower().subString("orc"))
			{
				m_enemies[0]->Damage(&player);
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
		if (input.toLower().subString("left") != nullptr)
		{

			player.getLocation() = 2;
			display();
		}
		else if (input.toLower().subString("up") != nullptr || input.toLower().subString("right") != nullptr || input.toLower().subString("down") != nullptr)
		{
			std::cout << "There is a wall that you cannot pass through!\n";
		}
		else
		{
			std::cout << "There is no direction known as " << input << "\n";
		}
	}
}

int & Room3::getLocation(int & location)
{
	return location;
}

void Room3::firstDisplay()
{
	std::cout << "Just like the rest of the dungeon,\nthe room is dimly lit.\nIn the centre of the room\nthere is a chess table with\nan Orc and a Goblin playing together";
}

void Room3::secondDisplay()
{
	std::cout << "The room has not changed and the slain\nenemies lay on th ground motionless\n";
}
