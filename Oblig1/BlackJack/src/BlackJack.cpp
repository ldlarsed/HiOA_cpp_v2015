//============================================================================
// Name        : BlackJack.cpp
// Author      : Lukas David Larsed s198569
// Version     :
// Copyright   : Free to share and modify
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardDeck.h"
#include "Strings.h"
#include "PlayerType.h"
#include "HPlayer.h"
#include "Game.h"
#include "HumanIO.h"

using namespace std;

int main() {

	HumanIO hi;

	//Starts the application
	int number_of_players = hi.getNumberOfPlayers();
	vector<string> p_names = hi.getPlayerNames(number_of_players);

	//Show players that are joining the game
	hi.showCreatedPlayers(p_names);


	//Create appropriate human player objects and start the game class
	vector<HPlayer> h_players;
	for(int i = 0; i < number_of_players; i++){
		h_players.push_back(HPlayer(500, PlayerType::Human, p_names[i]));
	}

	//Starts a BlackJack game
	Game *g = new Game(h_players);
	g->initilizeNewGame();
	g->runGame();



	return 0;
}
