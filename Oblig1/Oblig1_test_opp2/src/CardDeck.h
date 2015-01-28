/*
 * CardDeck.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef CARDDECK_H_
#define CARDDECK_H_
#include <vector>
#include "Suit.h"
#include "Card.h"


class CardDeck {
public:
	CardDeck();
	virtual ~CardDeck();

	const int NUMBER_OF_CARDS = 52;

	void shuffle();
	void printDeck();

private:
	std::vector<Card> deck;
	void createDeck(); //Suposed to be called from a constructor and create an ordered deque of cards

};

#endif /* CARDDECK_H_ */
