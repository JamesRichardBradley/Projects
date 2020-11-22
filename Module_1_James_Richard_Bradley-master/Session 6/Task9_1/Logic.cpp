#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

extern bool play, gameOver;
extern enum statNames { LOCATION, TURNS, HEALTH, ATTACK, DEFENCE, EVASION, KILLS, TOTALSTATS };
extern int playerStats[TOTALSTATS], die;
extern string choice, enemyChoice;

int dice(), statRoll(), statView(), output(), battle(), reset();

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
