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
#include "HumanInput.h"
#include "Strings.h"

using namespace std;

int main() {


	HumanInput hi;

	//Starts the application
	int number_of_players = hi.getNumberOfPlayers();
	vector<string> p_names = hi.getPlayerNames(number_of_players);

	cout << flush;
	cout << "Players in game: " << endl;
	for(int i = 0; i < p_names.size();i++)
		cout << "Player " << i+1 << " "<< p_names[i] << endl;



	return 0;
}
