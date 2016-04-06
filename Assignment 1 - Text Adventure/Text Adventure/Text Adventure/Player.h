#pragma once
#include "Creature.h"
#include "Map.h"

class Map;
class Player : public Creature
{
public:
	//added parameter to make more sense
	Player(MyString name);
	~Player();
	
	virtual void Damage(Player& enemy);

	void command(MyString input);

	//changed alittle
	int& getLocation();

	virtual int& GetHealth();
	//no need
	/*virtual MyString GetPlayerName(MyString input);*/
	//made a display function to be used, move to .cpp
	void display() {
		m_map.display();
	};
	void changeKey();
	bool returnKey();

protected:
	bool m_key;
	Map m_map;
};