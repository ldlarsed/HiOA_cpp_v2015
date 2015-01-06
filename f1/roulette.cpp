#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

using namespace std;



//Number of roulette spins
int MAX = 1000000;

//Counting all the spins
int count = 0;


void hello(){
	printf("Hello World");
}

int getRandomNumberInRange(int min, int max){
	return min+(rand() % (max-min+1));

}

void randomNumbers(){

	int i = 0;
	int r = 0;

	while(i < 10){
		cout << getRandomNumberInRange(0,1) << (rand() % 2) << endl;
		i++;
	}

}



main(){

	//hello();
	srand(time(NULL));
	randomNumbers();
}
