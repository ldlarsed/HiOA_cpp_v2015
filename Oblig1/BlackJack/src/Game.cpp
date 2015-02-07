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
		bank.giveCard(card_deck.getCard());
	}

	//Dealing out second card
	for (unsigned int i = 0; i < h_players.size(); i++) {
		h_players.at(i).giveCard(card_deck.getCard());
		bank.giveCard(card_deck.getCard());
	}

	h_io.showDealedCards(h_players, bank);

}
