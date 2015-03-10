//============================================================================
// Name        : Virtual.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Enemy {
public:
	/*
	 * Medfører at man kommer til å ha mulighet til å definiere om funksjonen
	 * i en subklasse dersom man ønsker.
	 * Dersom vi ikke bruker virtual her kommer det kun å skrives ut
	 * "genereic enemy attack" ettersom det blir funksjonen i superklassen som blir
	 * kallt opp.
	 *
	 * En virtuel funksjon må ses på som en tamplate funksjon.
	 * Alt som arver en virtuel funksjon er en polymorfisk
	 * klasse.
	 *
	 * Husk at dersom man skal bruke polyformisme så må man bruke virtual.
	 */
	virtual void attack() {
		cout << "Generic enemy attack!" << endl;
	}

	/*
	 * OBS!!!
	 * Følgende er pure virtuell funksjon. Med en pure virtuell funksjon
	 * betyr at vi må override den funksjonen i våre subklasser.
	 * Dette blir på sammen måte som man bruker interface i Java.
	 */
//	virtual void attack()=0;

	/*
	 * Dette medfører at dersom vi ønsker å lage en abstract klasse
	 * må den bli definiert med kun "pure virtual" funksjoner i seg.
	 */
};

class Ninja: public Enemy {
public:
	void attack() {
		cout << "Ninja attack!" << endl;
	}
};

class Monster: public Enemy {
public:
	void attack() {
		cout << "Monster attack!" << endl;
	}
};

class Alien: public Enemy {
public:
	/*
	 * Dersom vi ikke kommer til å bruke en lokal funkjson attack()
	 * som overrider fra superklassen kommer den til å å bruke den
	 * funksjonen fra superklassen.
	 */

};

int main() {

	Ninja n;
	Monster m;
	Alien a;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	Enemy *enemy3 = &a;

	enemy1->attack();
	enemy2->attack();
	enemy3->attack();
}
