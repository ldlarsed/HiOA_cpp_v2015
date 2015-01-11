//============================================================================
// Name        : RouletteWithClasses.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Roulette.h"
using namespace std;

int main() {

	cout << "Creating roulette" << endl;
	Roulette roulette;

	for(int i = 0; i < 10; i++){
		cout << roulette.getRandom() << endl;
	}

	roulette.showResults();

	return 0;
}
