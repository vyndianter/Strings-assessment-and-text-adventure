#include "iostream"
#include "time.h"
#include "MyString.h"
#include "Creature.h"
#include "Player.h"
#include "Orc.h"
#include "OrcBoss.h"
#include "Goblin.h"
#include <Windows.h>

using namespace std;

void clearText()
{
	system("CLS");
}

int main()
{
	MyString input;
	//you wat? why have two
	/*
	Creature player;
	Player playerCommand;
	*/
	//
	Player player(input.GetLine());
	cout << "Please type a name for your adventurer!\n";
	player.SetPlayerName(input.GetLine());
	clearText();
	cout << player.GetName() << ", you have been dropped into the dungeon with one objective\n\t\tTo Escape!\nYou will need to kill the Orc Raid Leader\nand collect his key to leave the dungeon!\n";
	system("PAUSE");
	clearText();
	while (true)
	{
		player.command(input.GetLine());
		if (player.ifDead())
		{
			return 0;
		}
	}


	system("PAUSE");
    return 0;
}

