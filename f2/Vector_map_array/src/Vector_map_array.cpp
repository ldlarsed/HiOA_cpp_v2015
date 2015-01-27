//============================================================================
// Name        : Vector_map_array.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <map>
using namespace std;

vector<int> vektor;
map<int, int> kart;
int tall[100];

int getRandom() {
	return rand() % 10;
}

void createVector() {
	for (int i = 0; i < 100; i++)
		vektor.push_back(getRandom());
}

void showVector() {
	for (unsigned int i = 0; i < vektor.size(); i++) {
		if (i % 10 == 0 && (i > 0 || i <= 10))
			cout << endl;
		cout << vektor[i] << "\t";
	}
}

void createMap() {
	for (int i = 0; i < 100; i++) {
		kart.insert(map<int, int>::value_type(i, getRandom()));
	}
}

void showMap() {
	for (std::map<int, int>::const_iterator it = kart.begin(); it != kart.end();
			it++) {
		int key = it->first;
		int value = it->second;
		cout << key << " : " << value << endl;
	}
}

void createArray(){


}


int main() {

	srand(time(NULL));

//	createVector();
//	showVector();
	createMap();
	showMap();

	return 0;
}
