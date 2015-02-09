/*
 * Test.h
 *
 *  Created on: Feb 2, 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_TEST_H_
#define BLACKJACK_SRC_TEST_H_
#include <iostream>
#include <algorithm>
#include "CardDeck.h"

class Test {
public:
	Test();
	virtual ~Test();

	void sortAndPrintArray(int size, int arr[]);
	static void printSizeOfCardDeck(CardDeck& deck, std::string callPosition);
private read();
};

#endif /* BLACKJACK_SRC_TEST_H_ */
