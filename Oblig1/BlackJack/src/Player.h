#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "PlayerType.h"

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
		this->score = 0;
	};
	virtual ~Player();

public:
	static unsigned int player_id;
	int getPlayerId();
	int getScore();
	void updateScore(int score);
	PlayerType getPlayerType();

private:
	int score;
	int cash;
	PlayerType player_type;
	std::string player_name;
	static void incrementPlayerID(){
		Player::player_id++;
	};

};
#endif // PLAYER_H
