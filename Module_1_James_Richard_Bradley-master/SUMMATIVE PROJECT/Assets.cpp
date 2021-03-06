// ASSETS.cpp contains all main "graphical" components, or large portions of text used throughout the game

#include "Source.h"

// title() contains the main title graphic for the game
void title()
{
    cout << R"(
  o8=========================================================================8o
     
      _______  _______  _______  _       _________          _______  _       
     (  ____ \(  ___  )(  ____ )( (    /|\__   __/|\     /|(  ___  )( \      
     | (    \/| (   ) || (    )||  \  ( |   ) (   | )   ( || (   ) || (      
     | |      | (___) || (____)||   \ | |   | |   | |   | || (___) || |      
     | |      |  ___  ||     __)| (\ \) |   | |   ( (   ) )|  ___  || |      
     | |      | (   ) || (\ (   | | \   |   | |    \ \_/ / | (   ) || |      
     | (____/\| )   ( || ) \ \__| )  \  |___) (___  \   /  | )   ( || (___/\
     (_______/|/     \||/   \__/|/    )_)\_______/   \_/   |/     \|(______/
            ___  __                   _ _                 _ _            
           /___\/ _|   /\/\   ___  __| (_) ___   ___ _ __(_) |_ _   _ 
          //  // |_   /    \ / _ \/ _` | |/ _ \ / __| '__| | __| | | |
         / \_//|  _| / /\/\ \  __/ (_| | | (_) | (__| |  | | |_| |_| |
         \___/ |_|   \/    \/\___|\__,_|_|\___/ \___|_|  |_|\__|\__, |
                                                                 |___/ 

     By James Richard Bradley
  o8=========================================================================8o
	)";
}

// menu() contains the on-screen display for the main menu options
void menu()
{
    cout << R"(
         o8==========8o          o8==========8o          o8==========8o
           |  PLAY  |              |  INFO  |              |  EXIT  |
         o8==========8o          o8==========8o          o8==========8o
	)" << endl;
}

// info() contains all the information for the INFO screen, spread out over 4 "pages"
void info()
{
    title();
    cout << R"(
  CARNIVAL OF MEDIOCRITY is a text based PUZZLE/ADVENTURE game for a single
  player, created in Visual Studio (C++) to run in the console window of a
  Windows PC, with a play time of roughly 30 MINUTES or so depending on luck
  and the skills of the player.

  The player has been trapped in a grubby and run down fairground in another
  dimension run by an inadequate Demonic Overlord - punished by the devil
  himself to guard and maintain the fairground for being an irritating mess,
  instead of the imposing demonic force he should be.  The player has to
  navigate the dimension and get the highest score on various amusements
  throughout the park, to obtain all the pieces of the key to escape.
                                                                       01/04
  o8=========================================================================8o
    )" << endl;

    cout << "  ";
    system("pause");
    system("CLS");
    title();

    cout << R"(
  The game will have ONE main level which will contain around FIVE areas, One
  for each amusement:
	 
	  - CARD MATCH
	  - COCONUT SHY
	  - RIDDLE MASTER

  An area for the exit gate (where the DEMONIC OVERLORD also resides), and an
  area for the FORTUNE TELLER, who also act's as a prize giver throughout the
  game.  If you speak to her nicely, she may also provide hint's or advantages
  to complete the amusements.
                                                                       02/04
  o8=========================================================================8o
    )" << endl;

    cout << "  ";
    system("pause");
    system("CLS");
    title();

    cout << R"(
  For the CARD MATCH game, the player must match pairs of cards in the lowest
  number of turns possible.  Once they have the top score on the leaderboard
  a part of the exit key will be given by the FORTUNE TELLER.

  For the COCONUT SHY game, the player must throw balls at the coconuts. There
  will be a chance that some of the coconuts are nailed down, and depending on
  your interactions with the FORTUNE TELLER this may be reduced, and ACCURACY
  improved.  Once they have the top score on the leaderboard a part of the exit
  key will be given by the FORTUNE TELLER.

  The RIDDLE MASTER will present the player with a series of riddles to solve
  with multiple choice answers.  The player must read through them carefully
  and select the correct options to win, and recieve the final part of the key
  to escape the carnival.  However, if the player angers the RIDDLE MASTER with
  too many incorrect answers, they may end up in a GAME OVER scenario from his
  wrath.
                                                                       03/04
  o8=========================================================================8o
    )" << endl;

    cout << "  ";
    system("pause");
    system("CLS");
    title();

    cout << R"(
  The game itself is simple to play and easy to understand, with a narrative
  influenced by authors such as Terry Pratchett, and the MONKEY ISLAND series
  of video games.
                                                                       04/04 
  o8=========================================================================8o
    )" << endl;
}
