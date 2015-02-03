#include <iostream>
#include <string>
#include <sstream>
#include "HumanInput.h"
#include "Strings.h"

using namespace std;

HumanInput::HumanInput() {
	cout << strings::GREATINGS << endl;
}

HumanInput::~HumanInput() {
}

string HumanInput::getSingleInputString() {

	string input_str;

	getline(cin, input_str);
	cout << input_str << endl;

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
	return (int) input;
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
