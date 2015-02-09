#ifndef GAME_H
#define GAME_H

#include <vector>
#include <sstream>
#include "CardDeck.h"
#include "HPlayer.h"
#include "Bank.h"
#include "HumanIO.h"
#include "Strings.h"
#include "PlayerAction.h"
#include "Card.h"
#include "ScoreCalc.h"
#include "Test.h"

class Game {

public:
	Game();
	Game(std::vector<HPlayer> h_players) {
		this->h_players = h_players;
	}
	;
	virtual ~Game();

	void initilizeNewGame(); //Mostly used to testing prints out names of players participating in the game
	void runGame();
	void showPlayerStats();

private:

	void placeBets();
	void dealTable();
	void requestPlayerAction();
	void showDealerPoints();
	void presentWinners();
	void putBackCards();
	/**
	 * My sneeky comparator to sort an vector by the results for each player.
	 */
	static bool resultsComp(const std::pair<Player*, int*>& i, const std::pair<Player*, int*>& j){
		return i.second < j.second;
	};

private:
	Bank bank;
	CardDeck card_deck;
	std::vector<HPlayer> h_players;
	HumanIO h_io;
	ScoreCalc sc;


};
#endif // GAME_H
