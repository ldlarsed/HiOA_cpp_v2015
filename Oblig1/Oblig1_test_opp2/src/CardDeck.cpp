/*
 * CardDeck.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#include <iostream>
#include "CardDeck.h"
using namespace std;

CardDeck::CardDeck() {
	createDeck();
}

CardDeck::~CardDeck() {
	// TODO Auto-generated destructor stub
}

void CardDeck::createDeck() {

	for (const auto s : SuitsArr) {
		for (const auto t : CardTypeArr) {
			deck.push_back(Card(s, t));
		}
	}
}

void CardDeck::printDeck() {
	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
		cout << ((Card) deck[i]).getFullCardName() << endl;
	}
}
