#include "Room4.h"



Room4::Room4()
{
	m_enemies.push_back(new OrcBoss());
}


Room4::~Room4()
{
}

void Room4::command(MyString input, Player & player)
{

	std::cout << "What will you do? ('Attack' or 'move (up, down, left or right)')\n";
	if (input.toLower().subString("attack") != nullptr)
	{
		if (m_enemies.size() > 0)
		{
			//ehhhh, no indication thats what you need to attack
			if (input.toLower().subString("orc raid leader"))
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
		if (input.toLower().subString("right") != nullptr)
		{
			player.getLocation() = 2;
			display();
		}
		else if (input.toLower().subString("left") != nullptr || input.toLower().subString("up") != nullptr || input.toLower().subString("down") != nullptr)
		{
			std::cout << "There is a wall that you cannot pass through!\n";
		}
		else
		{
			std::cout << "There is no direction known as " << input << "\n";
		}
	}
}


void Room4::firstDisplay()
{
	std::cout << "Unlike the other rooms there is no roof,\nthe sunlight burns your eyes as they have adjusted\nto the darkness.\nA huge Orc stands solely in the middle\n of the room with a key around his neck\n";
}

void Room4::secondDisplay()
{
	std::cout << "You Still can't believed you defeated the huge Orc,\nbut it's dead body lay there.\n";
}


