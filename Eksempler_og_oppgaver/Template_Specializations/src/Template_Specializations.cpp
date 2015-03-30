//============================================================================
// Name        : Template_Specializations.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * Template specislization er en klasse som endrer sin
 * implemetasjon avhengig av hvilket type som legges inn i den som
 * en parameter. Eksemple dersom vi skal sende inn tall skal
 * template agere annerledes enn dersom vi skal sende inn
 * characters.
 */

template <class T>

//Her tar vi alle generics untatt characters som vi har lagt en spesial konstruktør for
class Spunky{
public:
	Spunky(T x){
		cout << x << " is not a character!" << endl;
	}
};

//Her forteller vi kompilatoren at vi skal bruke template specialization
template<>
//Denne klassen kommer til å brukes kun til characters
class Spunky<char>{
public:
	Spunky(char x){
		cout << x << " is indeed a character!" << endl;
	}
};


int main() {

	Spunky<int> obj1(7);
	Spunky<double> obj2(8.0);
	Spunky<char> obj3('q');


	return 0;
}
