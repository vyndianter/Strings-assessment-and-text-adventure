#include "Room2.h"



Room2::Room2()
{
	m_enemies.push_back(new Orc());
}


Room2::~Room2()
{
}

void Room2::command(MyString input, Player & player)
{
	
	std::cout << "What will you do? ('Attack' or 'move (up, down, left or right)')\n";
	if (input.toLower().subString("attack") != nullptr)
	{
		if (m_enemies.size() > 0)
		{
			if (input.toLower().subString("orc"))
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
		if (m_enemies.size() == 0)
		{
			if (input.toLower().subString("left") != nullptr)
			{
				player.getLocation() = 4;
				display();
			}
			else if (input.toLower().subString("down") != nullptr)
			{
				player.getLocation() = 1;
				display();
			}
			else if (input.toLower().subString("right") != nullptr)
			{
				player.getLocation() = 3;
				display();
			}
			else if (input.toLower().subString("up") != nullptr)
			{
				if (player.returnKey() == true)
				{
					std::cout << "\t\t\tyou win!!\nclose and re-open to play again";
				}
				else
				{
					std::cout << "You need a key to open this door!\n";
				}

			}
			else
			{
				std::cout << "There is no direction known as " << input << "\n";
			}
		}
		else
		{
			std::cout << "You cannot run while enemies are in the room!\n";
		}
	}
}



void Room2::firstDisplay()
{
	std::cout << "You enter the room,\nIt also has the generic, dimly lit dungeon room.\nA single Orc guards the next three doors!\n";
}

void Room2::secondDisplay()
{
	std::cout << "The Orc's body still lay motionless,\nand nothing has changed in the room";
}
