#ifndef GAME_H
#define GAME_H

#include <vector>

#include "CardDeck.h"
#include "HumanInput.h"
#include "ScoreCalc.h"


#include "HPlayer.h"
#include "AiPlayer.h"
#include "Bank.h"


class Game {

public:

	Game(std::vector<HPlayer> h_players);
	virtual ~Game();

	AiPlayer ai1;

private:
	CardDeck card_deck;
	std::vector<HPlayer> players;
	HumanInput h_input;
	ScoreCalc sc;

	HPlayer test1;
	Bank b1;

};
#endif // GAME_H
