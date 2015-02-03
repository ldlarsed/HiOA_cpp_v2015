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

class Test {
public:
	Test();
	virtual ~Test();

	void sortAndPrintArray(int size, int arr[]);
};

#endif /* BLACKJACK_SRC_TEST_H_ */
