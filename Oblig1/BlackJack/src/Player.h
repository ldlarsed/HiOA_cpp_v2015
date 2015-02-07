#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <deque>
#include "PlayerType.h"
#include "Card.h"

class Player {
public:
	/*
	 * Husk at konstruktører i C++ arves ikke, de må kalles opp.
	 * I eventuelle subklasseer av denne klassen får vi ikke lov til å
	 * kalle opp instansvariablene i superkalssens konstruktør.
	 * Fra en seinere subklasse mp vi kalle opp konstruktøren gjennom
	 * HPlayer(string pName): Player(pName);
	 */
	Player(); //Må ha denne kosntruktørn for å få bort advarsel
	Player(int cash, PlayerType player_type, std::string player_name):
		cash(cash), player_type(player_type), player_name(player_name)
	{
		this->hand_score = 0;
		this->hand_bet = 0;
		this->previous_bet = 0;
		this->hand_size = 0;
	};
	virtual ~Player();

public:
	static unsigned int player_id;
	int getPlayerId();
	int getScore();
	void updateScore(int score);
	PlayerType getPlayerType();

	void setBet(int bet);
	void increaseBet(int additional_bet);
	void reBet(); //If user wants to use the same amount as in previous bet
	void resetBet();
	int getBet();
	std::string getPlayerName();

	void giveCard(Card card);
	Card removeLastCard();
	int playerHandSize();
	int getHandScore();
	std::deque<Card>& getPlayerHand();


private:
	int hand_score;
	int hand_bet;
	int previous_bet;
	int cash;
	PlayerType player_type;
	std::string player_name;

	std::deque<Card> player_hand; //Deque for the actual player hand
	int hand_size;

	static void incrementPlayerID(){
		++Player::player_id;
	};

};
#endif // PLAYER_H
