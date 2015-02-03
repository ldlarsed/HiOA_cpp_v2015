/*
 * Card.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_CARD_H_
#define BLACKJACK_SRC_CARD_H_
#include <string>
#include "Suit.h"
#include "CardType.h"

class Card {



public:

	Card(Suit suit, CardType c_type);
	virtual ~Card();

	Suit getSuit();
	CardType getCardType();

	std::string getSuitString();
	std::string getCardTypeString();
	std::string getFullCardName();

private:
	Suit suit;
	CardType c_type;
};

#endif /* BLACKJACK_SRC_CARD_H_ */
