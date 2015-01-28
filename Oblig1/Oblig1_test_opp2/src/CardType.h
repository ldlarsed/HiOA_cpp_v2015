/*
 * CardType.h
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */

#ifndef CARDTYPE_H_
#define CARDTYPE_H_

enum class CardType {
	Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
};

//Trenger denne for traversering gjennom enum
static const CardType CardTypeArr[] = { CardType::Two, CardType::Three,
		CardType::Four, CardType::Five, CardType::Six, CardType::Seven,
		CardType::Eight, CardType::Nine, CardType::Ten, CardType::Jack,
		CardType::Queen, CardType::King, CardType::Ace };

#endif /* CARDTYPE_H_ */
