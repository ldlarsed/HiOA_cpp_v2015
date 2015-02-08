#include "Game.h"

using namespace std;

Game::Game() {

}

Game::~Game() {
}

void Game::initilizeNewGame() {
	h_io.message("Players ", false);
	h_io.showPlayerNames(h_players);
}

/**
 * Starts and runs the game until user quits the aplication after one or more fulfilled rounds
 */
void Game::runGame() {
	char option;
	do {
		placeBets();
		dealTable();
		requestPlayerAction();
		showDealerPoints();
		presentWinners();
		putBackCards();
		h_io.message("Press (q) to quit <Enter> to continue", true);

		option = h_io.getSingleInputChar();
		if (option == 'q')
			return;
	} while (true);
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
		} while (pc != PlayerAction::Stand && score < 21);
	}
}

void Game::showDealerPoints() {

	stringstream ss;
	int score;

	while (bank.getHandScore() < 17) {
		ss.str("");
		ss.clear();
		bank.giveCard(card_deck.getCard());
		score = bank.getHandScore();
		ss << bank.getPlayerName() << " "
				<< bank.showLastCard().getFullCardName() << " " << score << " ";
		ss << sc.wonOrlost(score);
	}
	h_io.message(ss.str(), true);
}

/**
 * @TODO: Needs lot of fixing
 */
void Game::presentWinners() {

	Player* winner;
	int lowest = 21;
	int test;
	stringstream ss;
	ss << "Results" << endl;

	for (unsigned int i = 0; i < h_players.size(); i++) {
		test = h_players[i].getHandScore() % 21;
		if (test < lowest) {
			lowest = test;
			winner = &h_players[i];
		}
		ss << h_players[i].getPlayerName() << ": "
				<< h_players[i].getHandScore() << endl;
	}
	test = bank.getHandScore() % 21;
	if (test < lowest) {
		lowest = test;
		winner = &bank;
	}
	ss << bank.getPlayerName() << bank.getHandScore() << endl;

	ss << "Winner: " << winner->getPlayerName() << "test " << test << " score "
			<< winner->getPlayerName() << endl;
	h_io.message(ss.str(), false);
}

/**
 * Puts back cards dealed to players and dealer back to card deck
 */
void Game::putBackCards() {

	//Picks upp all cards from players
	for (unsigned int i = 0; i < h_players.size(); i++) {
		for (int j = 0; j < h_players[i].getHandSize(); j++) {
			card_deck.putBackCard(h_players[i].removeLastCard());
		}
		h_players[i].resetScore();
	}

	//Puts back cards from dealer
	for (int j = 0; j < bank.getHandSize(); j++) {
		card_deck.putBackCard(bank.removeLastCard());
	}
	bank.resetScore();
}
