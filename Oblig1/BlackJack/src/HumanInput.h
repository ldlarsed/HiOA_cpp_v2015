#ifndef HUMANINPUT_H
#define HUMANINPUT_H

#include <string>
#include "PlayerAction.h"
#include "Player.h"

/**
 * Gets inputs and communicates with one or more human players.
 */

class HumanInput {
public:
	HumanInput();

	virtual ~HumanInput();

	void getNumberOfPlayers();
	void getNames(int number_of_players);
	int requestBet(Player p);
	char getInputChar(char requested);

private:

};

#endif // HUMANINPUT_H
