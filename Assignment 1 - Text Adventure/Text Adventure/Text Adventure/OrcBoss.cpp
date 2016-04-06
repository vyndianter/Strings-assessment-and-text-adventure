#include "OrcBoss.h"
#include "Player.h"


OrcBoss::OrcBoss()
{
	m_name = "Orc Raid Leader";
	m_damage = 13;
	m_health = 100;
}

OrcBoss::~OrcBoss()
{
}
//changed to player& instead of character*
void OrcBoss::Damage(Player& enemy)
{
		Orc::Damage(enemy);
		if (m_health <= 0) {
			//allowing this
			enemy.changeKey();
		}
}




