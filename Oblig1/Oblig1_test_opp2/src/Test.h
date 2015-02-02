/*
 * Test.h
 *
 *  Created on: Feb 2, 2015
 *      Author: luke
 */

#ifndef TEST_H_
#define TEST_H_
#include <iostream>
#include <algorithm>

class Test {
public:
	Test();
	virtual ~Test();

	void sortAndPrintArray(int size, int arr[]);
};

#endif /* TEST_H_ */
