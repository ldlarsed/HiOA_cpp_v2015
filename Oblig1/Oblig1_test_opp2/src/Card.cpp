/*
 * Card.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */
#include <sstream>
#include <iostream>
#include <string>
#include "Card.h"


Card::Card(Suit suit, CardType c_type) {
	this->suit = suit;
	this->c_type = c_type;

}

Card::~Card() {
}

Suit Card::getSuit() {
	return this->suit;
}

CardType Card::getCardType() {
	return this->c_type;
}

std::string Card::getSuitString() {

	switch (this->suit) {
	case Suit::CLUB:
		return "CLUBS";
		break;
	case Suit::DIAMOND:
		return "DIAMONDS";
		break;
	case Suit::HEART:
		return "HEARTS";
		break;
	case Suit::SPADE:
		return "SPADES";
		break;
	default:
		std::cout << "No mach in switch case for card" << std::endl;
		break;
	}

	return "Empty Card (An error perhaps?)";
}

std::string Card::getCardTypeString() {
	switch (this->c_type) {
	case CardType::Ace:
		return "Ace";
		break;
	case CardType::King:
		return "King";
		break;
	case CardType::Queen:
		return "Queen";
		break;
	case CardType::Jack:
		return "Jack";
		break;
	case CardType::Ten:
		return "Ten";
		break;
	case CardType::Nine:
		return "Nine";
		break;
	case CardType::Eight:
		return "Eight";
		break;
	case CardType::Seven:
		return "Seven";
		break;
	case CardType::Six:
		return "Six";
		break;
	case CardType::Five:
		return "Five";
		break;
	case CardType::Four:
		return "Four";
		break;
	case CardType::Three:
		return "Three";
		break;
	case CardType::Two:
		return "Two";
		break;
	default:
		return "No maching card type";
		break;
	}
	return "Blank card type?";
}

std::string Card::getFullCardName() {
	std::stringstream ss;
	this->getCardTypeString();
	ss << getCardTypeString() << " of " << getSuitString();
	return ss.str();
}
