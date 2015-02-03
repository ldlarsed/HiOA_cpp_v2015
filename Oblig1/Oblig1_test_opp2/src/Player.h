#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "PlayerType.h"

class Player {
public:

	/**
	 * Constructor that creates a player with next avaiable id and initilizes a
	 * specific cash amount.
	 * @param  cash
	 * @param  player_type If dealer should recive a zero as ID. Dealer shouyld always
	 * be created from the Game class.
	 * @param  player_name
	 */
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
