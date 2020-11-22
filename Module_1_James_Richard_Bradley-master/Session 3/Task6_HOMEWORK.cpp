#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	bool brassKey = false, chestOpen = false, gameOver = false, playAgain = true, roomEnter = false, trapTrigger = false, yesNo = false;

	int damage, diceRoll, enemyNumber, health, mana, strength, defence, dexterity, perception;
	int enemyHp, enemyMana, enemyStrength, enemyDefence, enemyDexterity, enemyDiceroll;

	string enemyName, playerClass, playerChoice, enemyChoice;

	while (playAgain == true)
	{
		while (yesNo == false)
		{
			cout << " Choose your class:" << endl;
			cout << " | WARRIOR | MAGE | ROGUE |" << endl;
			cout << endl;
			cin >> playerClass;
			cout << endl;

			if (playerClass == "WARRIOR")
			{
				health = 200;
				mana = 0;
				strength = 18;
				defence = 18;
				dexterity = 6;
				perception = 6;
			}
			else if (playerClass == "MAGE")
			{
				health = 80;
				mana = 100;
				strength = 6;
				defence = 6;
				dexterity = 12;
				perception = 12;
			}
			else if (playerClass == "ROGUE")
			{
				health = 120;
				mana = 0;
				strength = 12;
				defence = 12;
				dexterity = 18;
				perception = 18;
			}
			else
			{
				health = 200;
				mana = 0;
				strength = 18;
				defence = 18;
				dexterity = 6;
				perception = 6;
			}

			cout << " You have chosen " << playerClass << endl;
			cout << " Your stats are:" << endl;
			cout << " HEALTH:      " << health << endl;
			cout << " MANA:        " << mana << endl;
			cout << " STRENGTH:    " << strength << endl;
			cout << " DEFENCE:     " << defence << endl;
			cout << " DEXTERITY:   " << dexterity << endl;
			cout << " PERCEPTION:  " << perception << endl;
			cout << endl;
			cout << " Are you happy with this choice?" << endl;
			cout << " | YES | NO |" << endl;
			cout << endl;
			cin >> playerChoice;
			cout << endl;

			if (playerChoice == "YES")
			{
				yesNo = true;
			}
			else
			{
				yesNo = false;
			}
		}
		while (gameOver == false)
		{
			srand(time(0));

			if (roomEnter == false)
			{
				cout << " You awaken in a dark dingy room, surrounded by mossy stone walls." << endl;
				cout << " You have no memory of how you got here, you'll have to rely on your" << endl;
				cout << " skills as a " << playerClass << " to escape from here." << endl;
				cout << endl;
				roomEnter = true;
				cout << " You notice that on the far left of the room appears to be a CHEST," << endl;
				cout << " and towards the end of the room what appears to be a DOOR of some" << endl;
				cout << " kind.  Which would you like to examine first?" << endl;
				cout << " | DOOR | CHEST |" << endl;
				cout << endl;
				cin >> playerChoice;
				cout << endl;
			}
			else
			{
				cout << " You turn back to the room.  On the far left side is the CHEST," << endl;
				cout << " and towards the end of the room is the DOOR." << endl;
				cout << " Which would you like to examine?" << endl;
				cout << " | DOOR | CHEST |" << endl;
				cout << endl;
				cin >> playerChoice;
				cout << endl;
			}
			if (playerChoice == "CHEST")
			{
				cout << " An old wooden chest is on the floor in front of you." << endl;

				if (chestOpen == true)
				{
					cout << " You have already searched this chest... there is nothing else inside." << endl;
					cout << endl;
				}
				else
				{
					cout << " Do you open the chest?" << endl;
					cout << " | YES | NO |" << endl;
					cout << endl;
					cin >> playerChoice;
					cout << endl;

					if (playerChoice == "YES")
					{
						diceRoll = rand() % 12 + 1;

						if ((perception + diceRoll) <= 22)
						{
							trapTrigger = true;
						}
						else
						{
							trapTrigger = false;
						}

						if (trapTrigger == true)
						{
							enemyNumber = rand() % 3 + 1;
							cout << " As you open the chest, you hear the 'TWANG' of a string snap!" << endl;

							if (enemyNumber == 1)
							{
								cout << " The wall behind the chest lowers, revealing an enourmous SPIDER" << endl;
								enemyHp = 80;
								enemyMana = 0;
								enemyStrength = 12;
								enemyDefence = 12;
								enemyDexterity = 12;
								enemyName = "SPIDER";
							}
							else if (enemyNumber == 2)
							{
								cout << " The wall behind the chest lowers, revealing a savage GOBLIN" << endl;
								enemyHp = 120;
								enemyMana = 0;
								enemyStrength = 18;
								enemyDefence = 12;
								enemyDexterity = 6;
								enemyName = "GOBLIN";
							}
							else if (enemyNumber == 3)
							{
								cout << " The wall behind the chest lowers, revealing an eerie WHISP " << endl;
								enemyHp = 100;
								enemyMana = 60;
								enemyStrength = 6;
								enemyDefence = 6;
								enemyDexterity = 12;
								enemyName = "WHISP";

							}

							cout << " ready to attack!" << endl;
							cout << endl;
							cout << " Prepare to fight!" << endl;
							cout << endl;

							while (enemyHp > 0)
							{
								if (health > 0)
								{
									cout << " " << playerClass << "'s Turn" << endl;

									if (playerClass == "WARRIOR")
									{
										cout << " HP: " << health << endl;
										cout << " | ATTACK | DEFEND |" << endl;
										cout << endl;
										cin >> playerChoice;
										cout << endl;
									}
									else if (playerClass == "MAGE")
									{
										if (mana < 100)
										{
											mana = mana + 4;
										}
										cout << " HP: " << health << "  MP: " << mana << endl;
										cout << " | ATTACK | FIREBALL | CURE | DEFEND |" << endl;
										cout << endl;
										cin >> playerChoice;
										cout << endl;
									}
									else if (playerClass == "ROGUE")
									{
										cout << " HP: " << health << endl;
										cout << " | ATTACK | DEFEND |" << endl;
										cout << endl;
										cin >> playerChoice;
										cout << endl;
									}
									else
									{
										cout << " HP: " << health << endl;
										cout << " | ATTACK | DEFEND |" << endl;
										cout << endl;
										cin >> playerChoice;
										cout << endl;
									}

									if (playerChoice == "ATTACK")
									{
										diceRoll = rand() % 12 + 1;
										enemyDiceroll = rand() % 12 + 1;

										if ((dexterity + diceRoll) > (enemyDexterity + enemyDiceroll))
										{
											if (enemyChoice == "DEFEND")
											{
												damage = (strength + diceRoll) - enemyDefence;
												cout << " You hit the " << enemyName << " for " << damage << " damage." << endl;
												cout << endl;
											}
											else
											{
												diceRoll = rand() % 12 + 1;
												damage = strength + diceRoll;
												enemyHp = enemyHp - damage;
												cout << " You hit the " << enemyName << " for " << damage << " damage." << endl;
												cout << endl;
											}
										}
										else if ((dexterity + diceRoll) < (enemyDexterity + enemyDiceroll))
										{
											cout << " The " << enemyName << " has evaded your attack." << endl;
										}
									}
									else if (playerChoice == "DEFEND")
									{
										cout << " You chose to defend." << endl;
										cout << endl;
									}
									else if (playerChoice == "FIREBALL")
									{
										if (mana > 16)
										{
											diceRoll = rand() % 12 + 1;
											damage = 24 + diceRoll;
											enemyHp = enemyHp - damage;
											mana = mana - 16;
											cout << " You hit the " << enemyName << " with a burning inferno for " << damage << " damage." << endl;
											cout << endl;
										}
										else
										{
											cout << " You do not have enough MANA to cast this spell." << endl;
											cout << endl;
										}
									}
									else if (playerChoice == "CURE")
									{
										if (mana > 16)
										{
											diceRoll = rand() % 12 + 1;
											damage = 24 + diceRoll;
											health = health + damage;
											mana = mana - 16;

											cout << " You have regained " << damage << " HEALTH." << endl;
											cout << endl;
										}
										else
										{
											cout << " You do not have enough MANA to cast this spell." << endl;
											cout << endl;
										}
									}

									if (enemyHp > 0)
									{
										cout << " " << enemyName << "'s Turn" << endl;
										cout << " HP: " << enemyHp << "  MP: " << enemyMana << endl;
										cout << endl;
										enemyDiceroll = diceRoll = rand() % 3 + 1;

										if (enemyName == "WHISP")
										{
											if (mana < 60)
											{
												mana = mana + 3;
											}
											if (enemyDiceroll == 1)
											{
												if (mana > 12)
												{
													enemyChoice = "FROST";
													diceRoll = rand() % 12 + 1;
													damage = 18 + enemyDiceroll;
													health = health - damage;
													enemyMana = enemyMana - 12;
													cout << " The WHISP has cast FROST for " << damage << " HEALTH." << endl;
													cout << endl;
												}
												else
												{
													cout << " The WHISP does not have enough MANA to cast this spell." << endl;
													cout << endl;
												}
											}
											else if (enemyDiceroll == 2)
											{
												cout << " The WHISP has chosen to DEFEND." << endl;
												cout << endl;
												enemyChoice = "DEFEND";
											}
											else if (enemyDiceroll == 3)
											{
												if (mana > 12)
												{
													enemyChoice = "FROST";
													diceRoll = rand() % 12 + 1;
													damage = 18 + enemyDiceroll;
													health = health - damage;
													enemyMana = enemyMana - 12;

													cout << " The WHISP has cast FROST for " << damage << " HEALTH." << endl;
													cout << endl;
												}
												else
												{
													cout << " The WHISP does not have enough MANA to cast this spell." << endl;
													cout << endl;
												}
											}
										}
										else if (enemyName == "GOBLIN")
										{
											if (enemyDiceroll == 1)
											{
												enemyChoice = "ATTACK";
												diceRoll = rand() % 12 + 1;
												enemyDiceroll = rand() % 12 + 1;
												if ((dexterity + diceRoll) < (enemyDexterity + enemyDiceroll))
												{
													if (playerChoice == "DEFEND")
													{
														damage = (enemyStrength + enemyDiceroll) - defence;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
													else
													{
														enemyDiceroll = rand() % 12 + 1;
														damage = enemyStrength + enemyDiceroll;
														health = health - damage;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
												}
												else if ((dexterity + diceRoll) > (enemyDexterity + enemyDiceroll))
												{
													cout << " You have evaded the " << enemyName << "'s attack." << endl;
												}
											}
											else if (enemyDiceroll == 2)
											{
												cout << " The GOBLIN has chosen to DEFEND." << endl;
												cout << endl;
												enemyChoice = "DEFEND";
											}
											else if (enemyDiceroll == 3)
											{
												enemyChoice = "ATTACK";
												diceRoll = rand() % 12 + 1;
												enemyDiceroll = rand() % 12 + 1;
												if ((dexterity + diceRoll) < (enemyDexterity + enemyDiceroll))
												{
													if (playerChoice == "DEFEND")
													{
														damage = (enemyStrength + enemyDiceroll) - defence;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
													else
													{
														enemyDiceroll = rand() % 12 + 1;
														damage = enemyStrength + enemyDiceroll;
														health = health - damage;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
												}
												else if ((dexterity + diceRoll) > (enemyDexterity + enemyDiceroll))
												{
													cout << " You have evaded the " << enemyName << "'s attack." << endl;
												}
											}
										}
										else if (enemyName == "SPIDER")
										{
											if (enemyDiceroll == 1)
											{
												diceRoll = rand() % 12 + 1;
												enemyDiceroll = rand() % 12 + 1;
												if ((dexterity + diceRoll) < (enemyDexterity + enemyDiceroll))
												{
													if (playerChoice == "DEFEND")
													{
														damage = (enemyStrength + enemyDiceroll) - defence;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
													else
													{
														enemyDiceroll = rand() % 12 + 1;
														damage = enemyStrength + enemyDiceroll;
														health = health - damage;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
												}
												else if ((dexterity + diceRoll) > (enemyDexterity + enemyDiceroll))
												{
													cout << " You have evaded the " << enemyName << "'s attack." << endl;
												}
											}
											else if (enemyDiceroll == 2)
											{
												cout << " The SPIDER has chosen to DEFEND." << endl;
												cout << endl;
												enemyChoice = "DEFEND";
											}
											else if (enemyDiceroll == 3)
											{
												diceRoll = rand() % 12 + 1;
												enemyDiceroll = rand() % 12 + 1;
												if ((dexterity + diceRoll) < (enemyDexterity + enemyDiceroll))
												{
													if (playerChoice == "DEFEND")
													{
														damage = (enemyStrength + enemyDiceroll) - defence;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
													else
													{
														enemyDiceroll = rand() % 12 + 1;
														damage = enemyStrength + enemyDiceroll;
														health = health - damage;
														cout << " The " << enemyName << " hit you for " << damage << " damage." << endl;
														cout << endl;
													}
												}
												else if ((dexterity + diceRoll) > (enemyDexterity + enemyDiceroll))
												{
													cout << " You have evaded the " << enemyName << "'s attack." << endl;
												}
											}
										}
									}

									if (health < 1)
									{
										cout << " The " << enemyName << " has killed you." << endl;
										cout << " | GAME OVER |" << endl;
										cout << endl;
										gameOver = true;
										enemyHp = enemyHp - 120;
									}
								}
							}
							if (enemyHp < 1)
							{
								cout << " The " << enemyName << " lay's dead at your feet.  You turn your" << endl;
								cout << " attention back to the open chest.  It seems empty, other than a" << endl;
								cout << " dusty old BRASS KEY." << endl;
								cout << " You place the BRASS KEY into your pocket... Maybe it has a use?" << endl;
								cout << endl;
								chestOpen = true;
								brassKey = true;
							}
						}
						else
						{
						cout << " You look inside the chest.  It seems empty, other than a dusty " << endl;
						cout << " old BRASS KEY." << endl;
						cout << " You place the BRASS KEY into your pocket... Maybe it has a use?" << endl;
						cout << endl;
						chestOpen = true;
						brassKey = true;
						}
					}
				}
			}
			else if (playerChoice == "DOOR")
			{
				cout << " You examine the large wooden door in front of you." << endl;
				cout << " It looks very thick and heavy, with a large tarnished brass" << endl;
				cout << " handle and lock." << endl;
				cout << endl;
				cout << " Try to open the door?" << endl;
				cout << " | YES | NO |" << endl;
				cout << endl;
				cin >> playerChoice;
				cout << endl;

				if (playerChoice == "YES")
				{
					if (brassKey == true)
					{
						cout << " You instert the BRASS KEY into the lock.  As you turn it, there" << endl;
						cout << " is a loud 'CLUNK' noise, and the door slowly swings open." << endl;
						cout << endl;
						cout << " Sunlight pours in through the open door, and you can see a path" << endl;
						cout << " leading out into a deep forest.  You have no idea where the path" << endl;
						cout << " will take you, but anywhere is better than here right now." << endl;
						cout << endl;
						gameOver = true;
					}
					else
					{
						cout << " This door is locked.  You will need a key to open it." << endl;
						cout << endl;
					}
				}
			}
		}

		cout << " Would you like to play again?" << endl;
		cout << " | YES | NO |" << endl;
		cout << endl;
		cin >> playerChoice;
		cout << endl;

		if (playerChoice == "NO")
		{
			playAgain = false;
		}
		else if (playerChoice == "YES")
		{
			playAgain = true;
			yesNo = false;
			gameOver = false;
			roomEnter = false;
			chestOpen = false;
			brassKey = false;
		}
	}

	cout << " Thanks for playing this short adventure!" << endl;

	return 0;
}
