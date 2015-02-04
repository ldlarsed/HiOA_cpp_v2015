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

int Player::getBet(){
	return this->hand_bet;
}

string Player::getPlayerName(){
	return player_name;
}
