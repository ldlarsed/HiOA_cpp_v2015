#include <iostream>
#include <string>
#include <sstream>
#include "HumanInput.h"
#include "Strings.h"

using namespace std;

HumanInput::HumanInput() {
	ClearScreen();
	cout << strings::GREATINGS << endl;
}

HumanInput::~HumanInput() {
}

string HumanInput::getSingleInputString(string message) {

	string input_str;
	while (cin == NULL)
		wait();
	getline(cin, input_str);

	return input_str;
}

char HumanInput::getSingleInputChar() {

	do {
		input = cin.get();
	} while (!input);

	return input;
}

int HumanInput::getNumberOfPlayers() {
	cout << strings::NUMBER_OF_PLAYERS << endl;
	input = getSingleInputChar();
	cout << "Starting game for " << input << " players" << endl;
	return atoi(&input);
}

vector<string> HumanInput::getPlayerNames(int number_of_players) {
	vector<string> p_names;

	for (int i = 0; i < number_of_players; i++) {
		string msg = strings::PLAYERNAME;
		cout << msg << i + 1 << endl;
		string fdbck;
		do {
			fdbck = getSingleInputString(msg);
			wait();
		} while (i < number_of_players && fdbck.empty());
		p_names.push_back(fdbck);
	}
	return p_names;
}

void HumanInput::ClearScreen() {
	cout << string(100, '\n');
}

void HumanInput::showCreatedPlayers(vector<string>& p_names) {
	cout << flush;
	cout << "Players in game: " << endl;
	for (unsigned int i = 0; i < p_names.size(); i++)
		cout << "Player " << i + 1 << " " << p_names[i] << endl;
}
//Eksempel på hvordan man kan lese hele strenger fra input fra bruker for å lese hele strenger
//	while(true){
//		getline(cin, input);
//		cout << input << endl;
//	}

//	do {
//		input = cin.get();
//		cout << input << endl;
//	} while (input != requested);
