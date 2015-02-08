/*
 * CardDeck.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_CARDDECK_H_
#define BLACKJACK_SRC_CARDDECK_H_
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
	Card getCard();
	void putBackCard(Card card);

private:
	std::vector<Card> tmp_card;
	std::deque<Card> deck;

	void createDeck(); //Suposed to be called from a constructor and create an ordered deque of cards

};

#endif /* BLACKJACK_SRC_CARDDECK_H_ */
