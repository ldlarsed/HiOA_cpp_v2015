/*
 * Card.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: luke
 */
#include <sstream>
#include <iostream>
#include "Card.h"

Card::Card(Suit suit, int value) {
	this->suit = suit;
	this->value = value;

}

Card::~Card() {
}

Suit Card::getSuit() {
	return this->suit;
}

int Card::getValue() {
	return this->value;
}

std::string Card::getSuitString() {

	switch (this->suit) {
	case Suit::CLUB:
		return "CLUB";
		break;
	case Suit::DIAMOND:
		return "DIAMOND";
		break;
	case Suit::HEART:
		return "HEART";
		break;
	case Suit::SPADE:
		return "SPADE";
		break;
	default:
		std::cout << "No mach in switch case for card" << std::endl;
		break;
	}

	return "Empty Card (An error perhaps?)";
}

std::string Card::getValueString(){
	std::stringstream ss;
	ss << this->value;
	return ss.str();
}
