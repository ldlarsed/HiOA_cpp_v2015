//============================================================================
// Name        : Class_Templates.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * Hele klasser kan være generic (template)
 */


template<class T>
class Lukas{

	T first, second;

public:
	Lukas(T a, T b){
		first=a;
		second=b;
	}
	T bigger();
};


/**
 * Her skal vi lage funksjonen bigger() som befinner seg
 * utenfor kalssedefinisjonen. I C++ trenger man til å bruke
 * template definisjonen på nytt. Litt usikker hvorfor med dersom
 * man ikke gjør det kommer denne ikke til å kompilere.
 */

template<class T>
//Her må vi først angi at funksjonparametern blir densamme som for klassen
T Lukas<T>::bigger(){
	return(first>second?first:second);
}


int main() {

	Lukas <int> lukas(69, 105);
	cout << lukas.bigger() << endl;


	cout << "" << endl; // prints 
	return 0;
}
