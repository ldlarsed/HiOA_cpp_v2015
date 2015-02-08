#include "Game.h"

using namespace std;

Game::Game() {

}

//Se hvorfor utskriften over ikke kommer ut?

Game::~Game() {
}

void Game::initilizeNewGame() {
	h_io.message("Players ", false);
	h_io.showPlayerNames(h_players);
}

void Game::runGame() {
	placeBets();
	dealTable();
	requestPlayerAction();
}

/**
 * Takes bets from all present player in the beginning of the game
 */
void Game::placeBets() {
	h_io.placeBets(&h_players);
}

/**
 * Deals two cards to all present players and dealer.
 */
void Game::dealTable() {
	card_deck.shuffle();

	//Dealing out first card
	for (unsigned int i = 0; i < h_players.size(); i++) {
		h_players.at(i).giveCard(card_deck.getCard());
	}
	bank.giveCard(card_deck.getCard());

	//Dealing out second card
	for (unsigned int i = 0; i < h_players.size(); i++) {
		h_players.at(i).giveCard(card_deck.getCard());
	}
	bank.giveCard(card_deck.getCard());

	h_io.showDealedCards(h_players, bank);

}

/**
 * After cards are dealt to all players requesting action from wach individual player
 * until player hits (2) STAND, gets a BLACKJACK or becomes BUSTED.
 */
void Game::requestPlayerAction() {

	PlayerAction pc;
	stringstream ss;
	int score;

	for (unsigned int i = 0; i < h_players.size(); i++) {
		do {
			ss.str("");
			ss.clear();
			pc = h_io.requestPlayerAction(h_players[i]);

			if (pc == PlayerAction::Hit) {
				h_players[i].giveCard(card_deck.getCard());
			}
			score = h_players[i].getHandScore();
			ss << h_players[i].getPlayerName() << " "
					<< h_players[i].showLastCard().getFullCardName() << " "
					<< score << " ";
			ss << sc.wonOrlost(score);
			h_io.message(ss.str(), true);
		} while (pc != PlayerAction::Stand && score <= 21);
	}
}

void Game::getDealerPoints(){

}
