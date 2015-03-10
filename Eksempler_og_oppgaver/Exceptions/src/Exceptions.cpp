//============================================================================
// Name        : Exceptions.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	try {
		int momsAge = 50;
		int sonsAge = 34;

		if (sonsAge > momsAge) {
			throw 99; //Dette kan være hva som helst for å identifiere den exception
			//Her må vi da huske sin egen referanse for hvilken error som vi har definiert
		}
	} catch (int x) {
		//Her catcher vi error
		cout << "Son cannot be older tha mom, Error Number";
	}

	try {

		int num1;
		cout << "Enter first number: " << endl;
		cin >> num1;

		int num2;
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (num2 == 0)
			throw 0;

		cout << num1 / num2 << endl;

	} catch (int x) {
		cout << "You cant devide by " << x << endl;
	} catch (...) {
		//Her kan vi catche alle andre ting som vi ikke veit hva det kan komme.
	}

	return 0;
}
