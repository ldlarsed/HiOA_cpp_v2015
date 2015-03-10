//============================================================================
// Name        : Operator.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sally.h"
using namespace std;

int main() {

	Sally a(34);
	Sally b(21);
	Sally c;

	/*
	 * Nå skal vi legge sammen verdier i c gjennom å kalle opp den
	 * overloadede operatoren som vi har lagd. Dette vil da medføre at vi
	 * plusser sammen ikke to objekter men den instansvariable som er
	 * definiert som operator overloading for dette objektet.
	 */

	c = a + b;

	cout << "Num for c: " << c.num;

	return 0;
}
