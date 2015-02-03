#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "PlayerType.h"


class Player {
public:

	Player();
	Player(int cash, PlayerType player_type, std::string player_name);

	virtual ~Player();

	int getPlayerId();

	int getScore();
	void updateScore(int score);
	PlayerType getPlayerType();

private:

	int player_id;
	int score;
	int cash;
	PlayerType player_type;
	std::string player_name;

};
#endif // PLAYER_H
