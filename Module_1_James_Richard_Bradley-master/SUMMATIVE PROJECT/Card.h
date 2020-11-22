
// All cards used within the game
int cards[16]{ 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8 };

// A default board that contains all the cards to be used on the gameboard
int gameBoard[4][4]
{
	{1, 4, 8, 3},
	{7, 6, 2, 7},
	{5, 1, 3, 6},
	{5, 8, 2, 4}
};

// Creates a 4x4 array of true/false for which card has been selected
bool gameBoardSelection[4][4]
{
	{false, false, false, false},
	{false, false, false, false},
	{false, false, false, false},
	{false, false, false, false}
};

// Variables to store positioning (which card the player has selected
int x, y, x2, y2, matches, turns;
