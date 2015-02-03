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

	int getNumberOfPlayers();
	void getNames(int number_of_players);
	int requestBet(Player p);
	std::string getSingleInputString(); //Retrieves a string and exits on enter
	char getSingleInputChar(); //Retrieves one char input from user

private:
	char input;
};

#endif // HUMANINPUT_H
