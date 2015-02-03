#include <iostream>
//#include <string>
#include "HumanInput.h"
#include "Strings.h"

using namespace std;

HumanInput::HumanInput() {
	cout << strings::GREATINGS << endl;
}

HumanInput::~HumanInput() {
}

char HumanInput::getInputChar(char requested) {

	char input;

	do {
		input = cin.get();
		cout << input << endl;
	} while (input != requested);

	return input;
}

void HumanInput::getNumberOfPlayers(){

}

//Eksempel på hvordan man kan lese hele strenger fra input fra bruker for å lese hele strenger
//	while(true){
//		getline(cin, input);
//		cout << input << endl;
//	}
