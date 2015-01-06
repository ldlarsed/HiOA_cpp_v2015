#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

using namespace std;



//Number of roulette spins
const int MAX = 1000000;

//Counting all the spins
int count = 0;
//We put the reuslts of a sequnce in this array. Assuming that the sequence will neverr be longer that 50
const int MAX_SEQ = 50;
int seq[MAX_SEQ];

//Variables for the sequence 0 = black, 1 = red
int spins;

int spinWheel(int min, int max){
	return rand() % 2;

}

void createSequence(){

	

}



void randomNumbers(){

	int i = 0;
	int r = 0;

	while(i < 10){
		cout << spinWheel(0,1) << (rand() % 2) << endl;
		i++;
	}

}



main(){

	//hello();
	//Resetting the sead and using time as random variable
	srand(time(NULL));
	randomNumbers();
}
