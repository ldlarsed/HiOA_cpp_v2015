//============================================================================
// Name        : Arrayer_og_c_string.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//function declaration
void stackmess();
void int_arr();
char* c_strings();

int main() {
	srand(time(NULL));
//	srand(time(0));
//	stackmess();
//	int_arr();
	//int_arr får tildelt samme verider ettersom verdiene fra den forrige ble destruert og samme minnesplasser blir gjennbrukt men ikke erstattet

	cout << "Retur fra c_string(): "<< c_strings()<< endl;
	cout << "Retur fra sizeof(c_string()): "<< sizeof(c_strings())<< endl;

	return 0;
}

void stackmess() {

	int arr1[20];
	int arr2[20];
	int arr3[20];

	for (int i = 0; i < 20; i++) {
		arr1[i] = rand();
		arr2[i] = rand();
		arr3[i] = rand();
	}

	for (int i = 0; i < 20; i++) {
		cout << arr1[i] << "\t" << flush;
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << arr2[i] << "\t" << flush;
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << arr3[i] << "\t" << flush;
	}
	cout << endl;
}

void int_arr() {

	int arr4[20];
	for (int i = 0; i < 20; i++) {
		cout << arr4[i] << "\t" << flush;
	}
	cout << endl;
}

char* c_strings() {
	const char* str = string("Hello world -C0is dangerous").c_str();
	cout << "str: " << str << endl;
	for (unsigned int i = 0; i < sizeof(str); i++) {
		cout << str[i] << endl;
	}
	cout << endl;
	cout << sizeof(str);
	//str er bare en peker, en peker er 8 byte derfor blir det ikke tildelt noe større enn dette. Denne derfor refererer ikke til lengden på strengen uten til lengden på pekeren.
	cout << endl;

	int strsize = 20;
	char str2[20] = {'H','e','l','l','o',' ','w','o','r','l','d','!'};
	cout << str2 << endl;
	for(int i = 0; i < sizeof(str2); i++){
		cout << str2[i] << endl;
	}
	cout << endl;
	cout << sizeof(str2);
	cout << endl;

	return str2;
}
