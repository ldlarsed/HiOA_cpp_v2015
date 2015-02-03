#ifndef HUMANINPUT_H
#define HUMANINPUT_H

#include <string>
#include <vector>
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
	std::vector<std::string> getPlayerNames(int number_of_players); //Promts for all player names.
	int requestBet(Player p);
	std::string getSingleInputString(std::string message); //Retrieves a string and exits on enter
	char getSingleInputChar(); //Retrieves one char input from user

private:
	char input;

	void ClearScreen();
};

#endif // HUMANINPUT_H
