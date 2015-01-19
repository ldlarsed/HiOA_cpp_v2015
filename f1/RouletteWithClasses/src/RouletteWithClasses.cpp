//============================================================================
// Name        : RouletteWithClasses.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "Roulette.h"
using namespace std;

void showNumberSpins(int spins){
	cout << "Spins: " << spins << endl << endl;
}

int main(int argc, char *argv[]) {

	if (argc >= 2) {
		cout << "Following arguments received : ";
		for (int i = 0; i < argc; i++) {
			cout << argv[i] << ", ";
		}
		cout << endl;
		int spins = atoi(argv[1]);
		showNumberSpins(spins);
		Roulette roulette(spins);
		roulette.showResults();

	} else {
		{
			showNumberSpins(10000000);
			Roulette roulette;
			cout << roulette.hello() << endl;
			roulette.showResults();

		}
	}
	return 0;
}
