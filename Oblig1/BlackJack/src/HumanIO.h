#ifndef HUMANINPUT_H
#define HUMANINPUT_H

#include <string>
#include <vector>
#include "PlayerAction.h"
#include "Player.h"
#include "HPlayer.h"
#include "Bank.h"
#include "BetSize.h"

/**
 * Gets inputs and communicates with one or more human players.
 */

class HumanIO {
public:
	HumanIO();

	virtual ~HumanIO();

	int getNumberOfPlayers();
	std::vector<std::string> getPlayerNames(int number_of_players); //Promts for all player names.
	std::string getSingleInputString(std::string message); //Retrieves a string and exits on enter
	char getSingleInputChar(); //Retrieves one char input from user
	int getSingleInputInt(); //Retrieves one char input from user
	void showCreatedPlayers(std::vector<std::string>& p_names);
	void placeBets(std::vector<HPlayer>* h_players);
	void message(std::string message, bool new_line);
	void showPlayerNames(std::vector<HPlayer>& h_players);
	void showDealedCards(std::vector<HPlayer>& h_players, Bank& bank);

private:
	char input;
	void ClearScreen();
};

#endif // HUMANINPUT_H
