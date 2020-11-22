#include "Header.h"
#include "extVariables.h"

int dice()
{
	srand((time(0)));
	die = (rand() % 12) + 1;
	return die;
}

int statRoll()
{
	srand((time(0)));
	playerStats[ATTACK] = (rand() % 6) + 13;
	playerStats[DEFENCE] = (rand() % 6) + 13;
	playerStats[EVASION] = (rand() % 6) + 13;
	return 0;
}

int reset()
{
	playerStats[LOCATION] = 0;
	playerStats[TURNS] = 0;
	playerStats[HEALTH] = 100;
	playerStats[KILLS] = 0;
	return 0;
}
