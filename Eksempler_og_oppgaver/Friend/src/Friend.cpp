//============================================================================
// Name        : Friend.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class StankFist{
public:
	StankFist(){stinkyVar=0;}
private:
	int stinkyVar;

	/*
	 * Friend medfører at funksjonen kommer til å ha tilgang til alt inne
	 * i klasser ettersom den er definiert som "friend"
	 */
	friend void stinkysFriend(StankFist &sfo);
};

/*
 * Nå kan vi oprette en funksjon helt utenfor som er en kompis og som
 * alikevel kommer til å fungere.
 */
void stinkysFriend(StankFist &sfo){
	sfo.stinkyVar=99;
	cout << sfo.stinkyVar << endl;
}


int main() {

	StankFist bob;
	/*
	 * Så kult, nå trenger ikke kalle opp funksjonen fra objektet men kan
	 * anrope den direkte fra main.
	 */
	stinkysFriend(bob);

	return 0;
}
