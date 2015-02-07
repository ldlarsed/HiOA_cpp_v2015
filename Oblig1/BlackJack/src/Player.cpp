#include "Player.h"

using namespace std;

//Player::Player(int cash, PlayerType player_type, std::string player_name){
//	this->cash = cash;
//	this->player_type = player_type;
//	this->player_name = player_name;
//	this->score = 0;
//	++player_id;
//}

//Player::Player(int cash, PlayerType player_type, std::string player_name) :
//		cash(cash), player_type(player_type), player_name(player_name) {
//	this->score = 0;
//}

//Player::Player(){}

Player::~Player() {
}

void Player::setBet(int bet) {
	this->hand_bet = bet;
	this->previous_bet = hand_bet;
}

void Player::increaseBet(int additional_bet) {
	this->hand_bet += additional_bet;
}

void Player::resetBet() {
	this->hand_bet = 0;
}

int Player::getBet() {
	return this->hand_bet;
}

string Player::getPlayerName() {
	return player_name;
}

/**
 * Adds a card to the actual player hand
 */
void Player::giveCard(Card card) {
	player_hand.push_back(card);
}

/**
 * Pops a card from the player hand. Used for removing cards from user hand together with getCard()
 */
Card Player::removeLastCard() {
	Card card = player_hand.back();
	player_hand.pop_back();
	return card;
}

/**
 * Shows the size of user hand
 */
int Player::playerHandSize() {
	return player_hand.size();
}

/**
 * Returns the score of actual player hand.
 */
int Player::getHandScore(){
	return hand_score;
}

/**
 * Returns a referance to the actual player hand.
 */
deque<Card>& Player::getPlayerHand(){
	return this->player_hand;
}
