//============================================================================
// Name        : Oblig1_test_opp2.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Card.h"
using namespace std;

int main() {


	Card card1(Suit::CLUB, 11);
	cout << card1.getSuitString() << card1.getValueString() << endl;



	return 0;
}
