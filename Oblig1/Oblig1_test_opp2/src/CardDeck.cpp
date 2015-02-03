/*
 * CardDeck.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#include "CardDeck.h"
#include "Test.h"
using namespace std;

CardDeck::CardDeck() {
	srand(time(NULL));
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

void CardDeck::shuffle() {

	int positions[NUMBER_OF_CARDS];
	bool exists[NUMBER_OF_CARDS];
	fill_n(exists, NUMBER_OF_CARDS, false);

	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
		int r;
		do {
			r = rand() % (NUMBER_OF_CARDS);
		} while (i < NUMBER_OF_CARDS && exists[r]);
		exists[r] = true;
		positions[i] = r;
		cout << positions[i] << ", ";
	}

	for(int i=0; i< NUMBER_OF_CARDS; i++){
		tmp_card.push_back(deck.at(i));
	}

	deck.clear();

	for(int i = 0; i< NUMBER_OF_CARDS; i++){
		deck.push_back(tmp_card[positions[i]]);
	}
}

/**
 * Offers a card last in the deck and deletes this card from the deck
 */
Card CardDeck::getCard(){
	Card card = deck.back();
	deck.erase(deck.end());
	return card;

}

void CardDeck::printDeck() {
//	Brukte slik måte for å skrive ut en vektir
//	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
//		cout << ((Card) tmp_card[i]).getFullCardName() << "\t" << rand() % 52
//				<< endl;
//	}

	std::deque<Card>::iterator it = deck.begin();
	while (it != deck.end())
		cout << it++->getFullCardName() << endl;
}
