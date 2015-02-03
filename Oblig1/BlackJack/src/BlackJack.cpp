//============================================================================
// Name        : BlackJack.cpp
// Author      : Lukas David Larsed s198569
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Card.h"
#include "CardDeck.h"
#include "HumanInput.h"
#include "Strings.h"
using namespace std;

int main() {

//	Card card1(Suit::CLUB, CardType::Ace);
//	cout << card1.getSuitString() << card1.getCardTypeString() << endl;
//	cout << card1.getFullCardName() << endl;
	CardDeck deck1;
//	deck1.printDeck();
	deck1.shuffle();
//	deck1.printDeck();

	cout << endl;
	cout << deck1.getCard().getFullCardName() << endl;
	cout << deck1.getCard().getFullCardName() << endl;

	HumanInput hi;
	hi.getInputChar('q');



	return 0;
}
