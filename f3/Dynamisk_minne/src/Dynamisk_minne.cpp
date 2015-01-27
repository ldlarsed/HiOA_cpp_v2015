//============================================================================
// Name        : Dynamisk_minne.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <unistd.h>
using namespace std;

const int size = 20000000;

int getRandom() {
	return rand() % 10;
}

void lagArray() {

	int *tall = new int[size];

	for (int i = 0; i < size; i++)
		tall[i] = getRandom();

	sort(tall, tall + size);
}

void lagVektor() {
	static vector<int> vektor(size, 0);

	for (int i = 0; i < 100; i++)
		vektor[i] = getRandom();

	sort(vektor.begin(), vektor.end());

}

/**
 * Ettersom det brukes int blir det allokert 4x2500 byte
 */
void lagMinnelekkasje() {
	for (int i = 0; i < 2500; i++) {
		int *size3 = new int(getRandom());

//		delete size3;
	}
}

/**
 * Dette bruker all minne og swap. Til slutt blir prosessen drept av oset.
 * Bruk sammen med valgrind for å finner ut hvor my minne som blir borte.
 * Her blir det allokelrt 4 byte (int) * 250 mil
 */
void lagHeftigMinnelekkasje() {
	for (int i = 0; i < 25000000000; i++) {
		int *size3 = new int(getRandom());
	}
}

/**
 * OBS! Dette vil kræsje maskinen.
 */
void lagForkbombe() {
	while (true)
		fork();
}

int main(int argc, char* argv[]) {

	srand(time(NULL));

	if (argc > 1) {
		cout << argc << endl;
		cout << argv[1] << endl;
		int param = atoi(argv[1]);
		cout << param << endl;
		switch (param) {
		case 1:
			lagArray();
			break;
		case 2:
			lagVektor();
			break;
		case 3:
			lagMinnelekkasje();
			break;
		case 4:
			lagHeftigMinnelekkasje();
			break;
		default:
			cout << "Make your choice";
		}
	}
	cout << endl;

	return 0;
}

/*
 * luke@weasel Debug]$ time ./Dynamisk_minne 1
 2
 1
 1


 real    0m7.096s
 user    0m6.995s
 sys     0m0.097s
 [luke@weasel Debug]$ time ./Dynamisk_minne 2
 2
 2
 2


 real    0m14.483s
 user    0m14.348s
 sys     0m0.127s
 [luke@weasel Debug]$
 */
