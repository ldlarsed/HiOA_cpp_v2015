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
//		Test::printSizeOfCardDeck(card_deck, "start of the game");
		placeBets();
//		Test::printSizeOfCardDeck(card_deck, " after placeBets()");
		dealTable();
//		Test::printSizeOfCardDeck(card_deck, "after dealTable()");
		requestPlayerAction();
		showDealerPoints();
		presentWinners();
//		Test::printSizeOfCardDeck(card_deck, "after presentWinners()");
		putBackCards();
//		Test::printSizeOfCardDeck(card_deck, "after putbackCards()");
		showPlayerStats();
		h_io.message("Press (q) to quit <Enter> to continue", true);

		option = h_io.getSingleInputChar();
		if (option == 'q') {
			delete this;
			return;
		}
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
			ss << sc.bj_or_bust(score);
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
		ss << sc.bj_or_bust(score);
	}
	h_io.message(ss.str(), true);
}

/**
 * @TODO: Needs lot of fixing
 */
void Game::presentWinners() {

	stringstream ss;

	ss << endl << "---=== RESULTS ===---" << endl;
	ss << "Player\t" << "Score\t" << "Wins" << endl;

	//Structure for saving the pair of player and results
	vector<pair<Player*, int>> results;

	//Stores pointer to the dealer
	results.push_back(make_pair(&bank, bank.getHandScore()));
	//stores all the players
	for (unsigned int i = 0; i < h_players.size(); i++) {
		results.push_back(
				make_pair(&h_players[i], h_players[i].getHandScore()));
	}

//	sort(results.begin(), results.end(), resultsComp);

//Saves the the dealer score
	int dealer_score = results[0].second;

	//Constructs the outputstream first for the dealer
	ss << results[0].first->getPlayerName() << "\t" << results[0].second
			<< endl;

	//constructs a string stream with thre results for all players starting with the dealer
	for (unsigned int i = 1; i < results.size(); i++) {
		ss << results[i].first->getPlayerName() << "\t" << results[i].second
				<< "\t" << "$"
				<< ScoreCalc::win_or_loose(dealer_score, results[i].second,
						results[i].first->getBet()) << "\t" << endl;
	}

	//Used as referance about how much each player gets in return
	vector<pair<Player*, int>> payback;
	for (unsigned int i = 1; i < results.size(); i++) {
		payback.push_back(
				make_pair(results[i].first,
						ScoreCalc::win_or_loose(dealer_score, results[i].second,
								results[i].first->getBet())));
	}

	for (unsigned int i = 0; i < payback.size(); i++) {
		payback[i].first->giveCash(payback[i].second);
	}

	h_io.message(ss.str(), true);
}

/**
 * Puts back cards dealed to players and dealer back to card deck
 */
void Game::putBackCards() {

	//Picks upp all cards from players
	for (unsigned int i = 0; i < h_players.size(); i++) {
		h_players[i].resetScore();
		h_players[i].resetHand();
	}

	bank.resetScore();
	bank.resetHand();

	card_deck.reset();

	//Following lines are just for testing
//	h_io.message("Show hand sizes", true);
//	for (unsigned int i = 0; i < h_players.size(); i++) {
//		printf("Player %d ", h_players[i].getHandSize());
//	}
//	printf("Dealer %d ", bank.getHandSize());
}

void Game::showPlayerStats() {
	stringstream ss;

	ss << endl << "---=== STATS ===---" << endl;
	ss << "Player\t\t" << "Total chips" << endl;

	vector<pair<Player*, int*>> player_stats;

	for (unsigned int i = 0; i < h_players.size(); i++) {
		player_stats.push_back(
				make_pair(&h_players[i], h_players[i].showCash()));
	}

	sort(player_stats.begin(), player_stats.end(), resultsComp);

	for (unsigned int i = 0; i < player_stats.size(); i++) {
		ss << player_stats[i].first->getPlayerName() << "\t\t" << "$"
				<< *player_stats[i].second << endl;
	}

	h_io.message(ss.str(), true);
}
