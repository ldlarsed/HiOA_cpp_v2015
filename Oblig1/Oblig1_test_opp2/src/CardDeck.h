/*
 * CardDeck.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef CARDDECK_H_
#define CARDDECK_H_
#include <iostream>
#include <vector>
#include <deque>
#include "Suit.h"
#include "Card.h"


class CardDeck {
public:
	CardDeck();
	virtual ~CardDeck();

	const static int NUMBER_OF_CARDS = 52;

	void shuffle();
	void printDeck();

private:
	std::vector<Card> tmp_card;
	std::deque<Card> deck;

	void createDeck(); //Suposed to be called from a constructor and create an ordered deque of cards

};

#endif /* CARDDECK_H_ */
