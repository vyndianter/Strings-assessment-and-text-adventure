#include "Player.h"
#include "Map.h"

Player::Player()
{
	m_damage = 18;
	m_health = 100;
	m_key = false;
}

Player::~Player()
{
}

void Player::Damage(Creature * enemy)
{
	
	Creature::Damage(enemy);
}

void Player::command(MyString input)
{
	m_map.command(input, *this);
}

int& Player::getLocation()
{
	return	m_map.getLocation();
}

int & Player::GetHealth()
{
	return Creature::GetHealth();
}

MyString Player::GetPlayerName(MyString input)
{
	return Creature::GetPlayerName();
}

void Player::changeKey()
{
	m_key = !m_key;
}

bool Player::returnKey()
{
	return m_key;
}
