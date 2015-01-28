/*
 * Card.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef CARD_H_
#define CARD_H_
#include <string>
#include "Suit.h"

class Card {
public:

	Card(Suit suit, int value);
	virtual ~Card();

	Suit getSuit();
	int getValue();

	std::string getSuitString();
	std::string getValueString();

private:
	Suit suit;
	int value;
};

#endif /* CARD_H_ */
