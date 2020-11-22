#include "Header.h"

bool play = true, gameOver = false;
enum statNames { LOCATION, TURNS, HEALTH, ATTACK, DEFENCE, EVASION, KILLS, TOTALSTATS };
int playerStats[TOTALSTATS]{ 0,0,100,0,0,0,0 }, die;
string choice = "YES", enemyChoice;
