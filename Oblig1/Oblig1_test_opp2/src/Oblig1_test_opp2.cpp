//============================================================================
// Name        : Oblig1_test_opp2.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

int main() {


//	Card card1(Suit::CLUB, CardType::Ace);
//	cout << card1.getSuitString() << card1.getCardTypeString() << endl;
//	cout << card1.getFullCardName() << endl;
	CardDeck deck1;
	deck1.printDeck();


	return 0;
}
