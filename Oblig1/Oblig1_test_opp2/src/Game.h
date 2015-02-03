
#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "HumanInput.h"
#include "CardDeck.h"
#include "ScoreCalc.h"

class Game
{
public:
	/**
	   * Constructor creates a game with a default dealer and a card deck of 52 cards.
	   * @param  number_of_players
	   */
	   Game (int number_of_players)
	  {
	  }

  virtual ~Game ();




private:

  CardDeck card_deck;
  // Vector for human or ai players. Not for saving a dealer since there is only one dealer per gamer.
  std::vector<Player> players;
  HumanInput h_input;
  ScoreCalc sc;
  Dealer daler;
};
#endif // GAME_H
