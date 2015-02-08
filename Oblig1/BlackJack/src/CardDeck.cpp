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

/**
 * Creates a deck of cards sorted after the spesified order inside the
 * enumm classes like SuitsArr and CardTypeArr
 */
void CardDeck::createDeck() {

	for (const auto s : SuitsArr) {
		for (const auto t : CardTypeArr) {
			deck.push_back(Card(s, t));
		}
	}
}


/**
 * Shuffles the created deck.
 * Utilizes two arrays as help structures to mark posision and a existence of a card.
 * Thereaftes uses a vector to put the "randomized" cards.
 * Whis one is quite innefective but it is fast anyway.
 * It shuffles values from 0 to 52 to find a new storage position for each card.
 * Each shuffled numer cannot repeat therefore for instance when we have 51 numbers it
 * takes a while to find the last one.
 */
void CardDeck::shuffle() {

	int l_deck = deck.size();

	int positions[l_deck];
	bool exists[l_deck];
	fill_n(exists, l_deck, false);

	for (int i = 0; i < l_deck; i++) {
		int r;
		do {
			r = rand() % (l_deck);
		} while (i < l_deck && exists[r]);
		exists[r] = true;
		positions[i] = r;
	}

	for(int i=0; i< l_deck; i++){
		tmp_card.push_back(deck.at(i));
	}

	deck.clear();

	for(int i = 0; i< l_deck; i++){
		deck.push_back(tmp_card[positions[i]]);
	}
}


/**
 * For backup. This one crashesh on second round.
 */
//void CardDeck::shuffle() {
//
//	int positions[NUMBER_OF_CARDS];
//	bool exists[NUMBER_OF_CARDS];
//	fill_n(exists, NUMBER_OF_CARDS, false);
//
//	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
//		int r;
//		do {
//			r = rand() % (NUMBER_OF_CARDS);
//		} while (i < NUMBER_OF_CARDS && exists[r]);
//		exists[r] = true;
//		positions[i] = r;
////		cout << positions[i] << ", ";
//	}
//
//	for(int i=0; i< NUMBER_OF_CARDS; i++){
//		tmp_card.push_back(deck.at(i));
//	}
//
//	deck.clear();
//
//	for(int i = 0; i< NUMBER_OF_CARDS; i++){
//		deck.push_back(tmp_card[positions[i]]);
//	}
//}

/**
 * Offers a card last in the deck and deletes this card from the deck
 */
Card CardDeck::getCard(){
	Card card = deck.back();
	deck.erase(deck.end());
	return card;

}

/**
 * Deletes the old deck and creates a new one which is unshuffled.
 */
void CardDeck::reset(){
	deck.clear();
	createDeck();
}
/**
 * Puts back a earlier "borrowed" card
 */
void CardDeck::putBackCard(Card card){
	deck.push_back(card);
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

int CardDeck::size(){
	return deck.size();
}
