#ifndef GAME_H
#define GAME_H

#include <vector>
#include "CardDeck.h"
#include "HumanInput.h"
#include "ScoreCalc.h"
#include "HPlayer.h"
//#include "Bank.h"

class Game {

public:
//	Game();
	Game(std::vector<HPlayer> h_players){
		this->h_players = h_players;
	};
	virtual ~Game();


private:
	CardDeck card_deck;
	std::vector<HPlayer> h_players;
	HumanInput h_input;
	ScoreCalc sc;
//	Bank bank;
};
#endif // GAME_H
