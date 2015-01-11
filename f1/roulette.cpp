#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


using namespace std;

const int SPIN_COUNT = 10000000;
const int MIN = 0, MAX = 1;
const int MAX_LENGTH = 40;
int seq[MAX_LENGTH];
int largest_seq_present = 0;
int c_red, c_black;

int getRandom(int min, int max){
	return rand() % 2;

}

void countColor(int numb) {
	if (numb == 0)
		c_red++;
	else
		c_black++;
}

void createSequences(){
	int rand = 0, rand_old=0, count=1;
	
	for(int i=1; i<=SPIN_COUNT; i++){
		if(i==1){
			//Foretar en ekstra trekking ved første gang dette skal kjøre
			rand = getRandom(MIN, MAX);
			rand_old = rand;
		}
		rand = getRandom(MIN, MAX);
		if(rand == rand_old)
			//Så lenge sekvensen er gyldig legges verdier på telleren
			count++;
		else{
			//Her kommer vi dersom et annet tall er trukket og den siste sekvensen skal lagres
			seq[count]++;	
			if(count > largest_seq_present)
				largest_seq_present = count;
			count = 1;
		}
		countColor(rand);
		//Oppdaterer rand_old for nest interasjon
		rand_old = rand;
	}
}

void getResults(){
	createSequences();
	string output;
	for(int i = 1; i <= largest_seq_present; i++){
		//output += string(i) + ":" + seq[i]+"\n";
		cout << i << ":\t" << seq[i] << endl;
	}
	cout << "Red:\t" << c_red << endl;
	cout << "Black:\t" << c_black << endl;
}


main(){
	//Resetting the sead and using time as random variable
	srand(time(NULL));
	getResults();
}
