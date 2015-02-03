/*
 * Suit.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_SUIT_H_
#define BLACKJACK_SRC_SUIT_H_



enum class Suit {
	SPADE, DIAMOND, CLUB, HEART
};
//Trenger dennwe for å gjøre det mulig til å itererere
static const Suit SuitsArr[] =
		{ Suit::CLUB, Suit::DIAMOND, Suit::HEART, Suit::SPADE };

#endif /* BLACKJACK_SRC_SUIT_H_ */
