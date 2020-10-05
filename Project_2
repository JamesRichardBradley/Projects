
/* THIS IS THE FIRST VERSION OF A BASIC INVENTORY VALUE CALCULATOR FOR MATERIALS AND VALUABLE IN SKYRIM SE */

#include <iostream>												
#include <string>

using namespace std;

const float merchantBase = 3.33, playerBase = 1.33, skooma = 25;
enum valGems { GARNET = 150, AMETHYST = 180, RUBY = 350, SAPPHIRE = 500, EMERALD = 750, DIAMOND = 1000 };
enum valOres { IRON = 2, CORUNDUM = 20, ORICHALCUM = 20, QUICKSILVER = 25, SILVER = 25, MALACHITE = 30, MOONSTONE = 30, GOLD = 50, EBONY = 60 };
float factor, quantity;
int baseCost, buySeptims, number, sellSeptims, skoomaNumber, skoomaRemainder, speechLvl;
string gemsOres, gemStone, oreStone;

int main()
{
	cout << " SKYRIM  MATERIAL VALUE CALCULATOR" << endl;
	cout << endl;
	cout << " Please enter you Speech Level (1 - 100)" << endl;
	cin >> speechLvl;
	cout << endl;

	/* SPEECH LEVEL CORRECTION AND FACTOR EQUATION - (ENSURES THE LEVEL IS ALWAYS BETWEEN 1 & 100) */
	{
		if (speechLvl < 1)
			speechLvl = 1;
		else if (speechLvl > 100)
			speechLvl = 100;

		factor = merchantBase - (playerBase * (speechLvl / 100));
	}

	/* INTRODUCTION - (ALL THE INTRODUCTORY TEXT) */
	{
		cout << " You approach the Khajit, who is stood in front of his caravan," << endl;
		cout << " casually picking at his claws.  He notices you approaching and" << endl;
		cout << " bows in greeting." << endl;
		cout << endl;
		cout << " '' Ri'saad welcomes you, The dragons and the war have scared many" << endl;
		cout << "    other traders away, but for those with courage, there is much" << endl;
		cout << "    profit to be made. ''" << endl;
		cout << endl;
		cout << " '' Ri'saad is only interested in trading GEMS and ORES this day..." << endl;
		cout << "    Which do you wish to trade... 'five-claw'? ''" << endl;
		cin >> gemsOres;
	}

	if (gemsOres == "GEMS")
	{
		cout << " '' Excellent choice... which GEMSTONE is of interest? ''" << endl;
		cout << " | GARNET | AMETHYST | RUBY | SAPPHIRE | EMERALD | DIAMOND |" << endl;
		cin >> gemStone;
		cout << endl;
		cout << " '' And how many do you wish to trade? ''" << endl;
		cin >> quantity;
		cout << endl;

		if (quantity < 1)
		{
			cout << " '' If you have nothing to trade... why do you waste Ri'saad's" << endl;
			cout << "    time? ''" << endl;
			cout << endl;
			cout << " Ri'saad throws his hands in the air, annoyed at the pointless" << endl;
			cout << " interruption... and walks away, refusing to talk further." << endl;
			cout << endl;
		}

		else if (gemStone == "GARNET")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = GARNET * factor;
				sellSeptims = GARNET / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 GARNET for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " GARNETS would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 GARNET for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " GARNETS would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (gemStone == "AMETHYST")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = AMETHYST * factor;
				sellSeptims = AMETHYST / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 AMETHYST crystal for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " AMETHYST crystals would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 AMETHYST crystal for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " AMETHYST crystals would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (gemStone == "RUBY")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = RUBY * factor;
				sellSeptims = RUBY / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 RUBY for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " RUBIES would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 RUBY for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " RUBIES would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (gemStone == "SAPPHIRE")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = AMETHYST * factor;
				sellSeptims = AMETHYST / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 SAPPHIRE for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " SAPPHIRES would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 SAPPHIRE for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " SAPPHIRES would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (gemStone == "EMERALD")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = EMERALD * factor;
				sellSeptims = EMERALD / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 EMERALD for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " EMERALDS would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 EMERALD for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " EMERALDS would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (gemStone == "DIAMOND")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = DIAMOND * factor;
				sellSeptims = DIAMOND / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 DIAMOND for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " DIAMONDS would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 DIAMOND for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " DIAMONDS would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else
		{
			cout << " '' Ri'saad has not heard of this Gemstone... There is nothing I" << endl;
			cout << "    can do for you. ''" << endl;
		}
	}

	else if (gemsOres == "ORES")
	{
		cout << " '' Excellent choice... which ORE is of interest? ''" << endl;
		cout << " | IRON | CORUNDUM | ORICHALCUM | QUICKSILVER | SILVER |" << endl;
		cout << "         | MALACHITE | MOONSTONE | GOLD | EBONY |" << endl;
		cin >> oreStone;
		cout << endl;
		cout << " '' And how many do you wish to trade? ''" << endl;
		cin >> quantity;
		cout << endl;

		if (quantity < 1)
		{
			cout << " '' If you have nothing to trade... why do you waste Ri'saad's" << endl;
			cout << "    time? ''" << endl;
			cout << endl;
			cout << " Ri'saad throws his hands in the air, annoyed at the pointless" << endl;
			cout << " interruption... and walks away, refusing to talk further." << endl;
			cout << endl;
		}

		else if (oreStone == "IRON")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = IRON * factor;
				sellSeptims = IRON / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 IRON ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " IRON ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 IRON ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " IRON ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "CORUNDUM")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = CORUNDUM * factor;
				sellSeptims = CORUNDUM / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 CORUNDUM ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " CORUNDUM ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 CORUNDUM ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " CORUNDUM ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "ORICHALCUM")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = ORICHALCUM * factor;
				sellSeptims = ORICHALCUM / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 ORICHALCUM ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " ORICHALCUM ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 ORICHALCUM ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " ORICHALCUM ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "QUICKSILVER")
		{
			// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = QUICKSILVER * factor;
				sellSeptims = QUICKSILVER / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 QUICKSILVER ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " QUICKSILVER ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 QUICKSILVER ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " QUICKSILVER ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "SILVER")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = SILVER * factor;
				sellSeptims = SILVER / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 SILVER ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " SILVER ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 SILVER ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " SILVER ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "MALACHITE")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = MALACHITE * factor;
				sellSeptims = MALACHITE / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 MALACHITE ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " MALACHITE ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 MALACHITE ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " MALACHITE ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "MOONSTONE")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = MOONSTONE * factor;
				sellSeptims = MOONSTONE / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 MOONSTONE ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " MOONSTONE ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 MOONSTONE ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " MOONSTONE ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "GOLD")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = GOLD * factor;
				sellSeptims = GOLD / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 GOLD ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " GOLD ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 GOLD ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " GOLD ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

		else if (oreStone == "ORICHALCUM")
		{
		// CALCULATIONS FOR COINAGE AND SKOOMA
			{
				buySeptims = EBONY * factor;
				sellSeptims = EBONY / factor;
				number = static_cast <int> (quantity);

				skoomaNumber = (sellSeptims * number) / (skooma / factor);
				skoomaRemainder = (sellSeptims * number) % skoomaNumber;
			}

			cout << " '' I buy 1 EBONY ore for " << sellSeptims << " Septims." << endl;
			cout << "    " << number << " EBONY ores would be " << sellSeptims * number << " Septims. ''" << endl;
			cout << endl;
			cout << " '' You know, that would buy you " << skoomaNumber << " bottles of Skooma, with " << skoomaRemainder << " Septims spare..." << endl;
			cout << "    Just a suggestion... five-claw... '' " << endl;
			cout << endl;
			cout << " '' I sell 1 EBONY ore for " << buySeptims << " Septims." << endl;
			cout << "    " << number << " EBONY ores would be " << buySeptims * number << " Septims. ''" << endl;
			cout << endl;
		}

	}

	else
	{
			cout << " '' I'm afraid Ri'saad is not interested in such things... ''" << endl;
			cout << endl;
			cout << " Ri'saad... confused by the entire situation, turns and climbs" << endl;
			cout << " into his caravan... and quickly shuts the door behind him." << endl;
	}

	return 0;

}

