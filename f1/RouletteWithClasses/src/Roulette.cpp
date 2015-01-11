/*
 * Roulette.cpp
 *
 *  Created on: Jan 11, 2015
 *      Author: luke
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

#include "Roulette.h"

int seq[40];

Roulette::Roulette() {
	spin_count = 1000000;
	MAX_LENGTH = 40;
	MIN = 0;
	MAX = 1;
	largest_seq_present = 0;
	c_black = 0, c_red = 0;
	srand(time(NULL));
}

//Roulette::Roulette(int spins) {
//	this->spin_count = spins;
//	MAX_LENGTH = 40;
//	MIN = 0;
//	MAX = 1;
//	largest_seq_present = 0;
//	c_black = 0, c_red = 0;
//}

//Roulette::~Roulette() {
//	cout << "Program finished";
//}

void Roulette::countColor(int numb) {
	if (numb == 0)
		c_red++;
	else
		c_black++;
}

int Roulette::getRandom() {
	return rand() % 2;
}

void Roulette::createSequences() {
	cout << "Creating sequences" << endl;
	int rand = 0, rand_old = 0, count = 1;

	for (int i = 1; i <= spin_count; i++) {
		if (i == 1) {
			rand = getRandom();
			rand_old = rand;
		}
		rand = getRandom();
		if (rand == rand_old)
			count++;
		else {
			seq[count]++;
			if(count > largest_seq_present)
				largest_seq_present = count;
			count = 1;
		}
		countColor(rand);
		rand_old = rand;
	}
	cout << "Largest seq: " << largest_seq_present << endl;
}

void Roulette::showResults(){
	createSequences();
	cout << "sequences created" << endl;
	stringstream ss;

	for(int i = 1; i <= largest_seq_present; i++){
		cout << i << ":\t" << seq[i] << endl;
	}

//	string results = ss.str();
//
//	cout << results << endl;;

}
