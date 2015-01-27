//============================================================================
// Name        : Statisk_minne.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

const int size = 20000000;

int getRandom() {
	return rand() % 10;
}

void visArray(int arr[]) {
	for (int i = 0; i < 1000; i++) {
		if (i % 10 == 0 && (i > 0 && i < 10))
			cout << endl;
		cout << arr[i] << " ";
	}
}

void lagArray() {

	static int tall[size];

	for (int i = 0; i < size; i++)
		tall[i] = getRandom();

//	visArray(tall);
	sort(tall, tall + size);
//	visArray(tall);
}

void lagVektor() {
	static vector<int> vektor(size, 0);

	for (int i = 0; i < 100; i++)
		vektor[i] = getRandom();

	sort(vektor.begin(), vektor.end());

}

int main(int argc, char *argv[]) {

	srand(time(NULL));

	if (argc > 1) {
		cout << argc << endl;
		cout << argv[1] << endl;
		int param = atoi(argv[1]);
		cout << param << endl;
		if (param == 1)
			lagArray();
		if (param == 2)
			lagVektor();
	}
	cout << endl;
	return 0;
}

/*
 * Med deklarasjon av arrayen inne i main tar det ca 7s å sortere alle verdiene.
 *
 * Forskjell mellom array og vektor:
 * [luke@weasel Debug]$ time ./Statisk_minne 1
 2
 1
 1


 real    0m6.878s
 user    0m6.799s
 sys     0m0.072s
 [luke@weasel Debug]$ time ./Statisk_minne 2
 2
 2
 2


 real    0m14.493s
 user    0m14.336s
 sys     0m0.149s
 [luke@weasel Debug]$
 *
 */
