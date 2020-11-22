// CARD.cpp contains all the coding for the MEMORY MATCH CARD GAME

#include "Source.h"
#include "Card.h"

// Shuffles the cards ready for the card game
void shuffleCards()
{

}

// drawBoard() draws the layout of the cards on the screen
void drawBoard()
{	
	cout << endl;
	cout << "  o8=========================================================================8o  " << endl;
	cout << "                          1         2         3         4      " << endl;
	// for loop that draws each row of cards, where "int i" is the row number
	for (int i = 0; i <= 3; i++)
	{
	    cout << "                       _______   _______   _______   _______   " << endl;
		cout << "                      |       | |       | |       | |       |  " << endl;
		cout << "                      |       | |       | |       | |       |  " << endl;
		cout << "                   " << i+1 << "  ";

		// Nested for loop that prints the cards value if it has been selected/matched, where "int j" is the column number
		for (int j = 0; j <=3; j++)
		{
			if (gameBoardSelection[i][j] == false)
			{
				cout << "|   #   | ";
			}
			else
			{
				cout << "|  (" << gameBoard[i][j] << ")  | ";
			}
		}
		cout << endl;
		cout << "                      |       | |       | |       | |       |  " << endl;
		cout << "                      |_______| |_______| |_______| |_______|  " << endl;
	};
	cout << "                                                         MATCHES COMPLETED: "<< matches <<endl;
	cout << "  o8=========================================================================8o  " << endl;
};

void cardGame()
{
	while (matches < 8)
	{
		drawBoard();
		cout << "  FIRST CARD " << endl;
		cout << "  Please enter which ROW: ";
		cin >> x;
		--x;
		cout << endl;
		cout << "  Please enter which COLUMN: ";
		cin >> y;
		--y;
		gameBoardSelection[x][y] = true;
		system("CLS");
		drawBoard();
		cout << "  SECOND CARD " << endl;
		cout << "  Please enter which ROW: ";
		cin >> x2;
		--x2;
		cout << endl;
		cout << "  Please enter which COLUMN: ";
		cin >> y2;
		--y2;
		gameBoardSelection[x2][y2] = true;
		system("CLS");
		drawBoard();

		// If the first card value DOES match the second card value
		if (gameBoard[x][y] == gameBoard[x2][y2])
		{
			cout << "THAT'S A MATCH!" << endl;
			cout << "  ";
			system("pause");
			system("CLS");
			matches++;
		}
		// If the first card value DOES NOT match the second card value
		else
		{
			cout << "NOT A MATCH!  TRY AGAIN" << endl;
			gameBoardSelection[x][y] = false;
			gameBoardSelection[x2][y2] = false;
			cout << "  ";
			system("pause");
			system("CLS");
		}
		turns++;
	}
	// Completion Message
	cout << "  CONGRATULATIONS YOU WON THE GAME!" << endl;
	cout << "  It took you " << turns << " turns to complete!" << endl;
	cout << "  ";
}
