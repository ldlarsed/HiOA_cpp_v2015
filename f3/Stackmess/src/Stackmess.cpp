//============================================================================
// Name        : Stackmess.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : C++ uke 4 og 5. Automatisk minne og stack.
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int getRandom(){
	return rand() % 10;
}


/**
 * Oppgave 1. Se hvor lang du kan gå ved å lage en rekursiv funksjon som kaller seg selv i ganger.
 */
void stackmess(int i){
	cout << i++ << endl;
	return stackmess(i);
}

/**
 * Oppgave 2.
 * Oppgave 3.
 * Se hvor stor array du kan allokere på stakk.
 */
void arraymess(int size, int tall[], int rek_height){

	size_t newSize = size + 2;
	int tmp[newSize];

	memcpy(tmp, tall, size*sizeof(int));

	size = newSize;
	tall = tmp;


	cout << "Size: " << size << "\tRek: "<< rek_height++ << endl;

	return arraymess(size, tall, rek_height);
}

int* throw2(){

	return 0;
}




int main() {

	srand(time(NULL));

//	stackmess(0);
	int tall[] = {0};
	arraymess(1, tall,0);

	return 0;
}
