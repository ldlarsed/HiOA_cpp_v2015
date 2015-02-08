/*
 * Test.cpp
 *
 *  Created on: Feb 2, 2015
 *      Author: luke
 */

#include "Test.h"

using namespace std;
/**
 * The overall purpose of this class is test varios of methods.
 */
Test::Test() {

}

Test::~Test() {
}

void Test::sortAndPrintArray(int size, int arr[]) {
	sort(arr, arr + size);
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << endl;
}

void Test::printSizeOfCardDeck(CardDeck& deck, string callPosition) {
	cout << "Current size if the deck: " << deck.size() << " called from "
			<< callPosition << endl;
}
