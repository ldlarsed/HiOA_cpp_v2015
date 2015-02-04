#ifndef GAME_H
#define GAME_H

#include <vector>
#include <sstream>
#include "CardDeck.h"
#include "ScoreCalc.h"
#include "HPlayer.h"
#include "Bank.h"
#include "HumanIO.h"
#include "Strings.h"

class Game {

public:
	Game();
	Game(std::vector<HPlayer> h_players) {
		this->h_players = h_players;
	};
	virtual ~Game();

	void initilizeNewGame(); //Mostly used to testing prints out names of players participating in the game
	void runGame();

private:
	void placeBets();

private:
	Bank bank;
	CardDeck card_deck;
	std::vector<HPlayer> h_players;
	HumanIO h_io;
	ScoreCalc sc;

};
#endif // GAME_H
