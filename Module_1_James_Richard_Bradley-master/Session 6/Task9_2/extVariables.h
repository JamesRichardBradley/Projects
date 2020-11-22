#include "Header.h"

extern bool play, gameOver;
extern enum statNames { LOCATION, TURNS, HEALTH, ATTACK, DEFENCE, EVASION, KILLS, TOTALSTATS };
extern int playerStats[TOTALSTATS], die;
extern string choice, enemyChoice;

int dice(), statRoll(), statView(), output(), battle(), reset();
