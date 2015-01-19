//============================================================================
// Name        : Type_unsafety.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void type_danger();

int main() {

	type_danger();

	return 0;
}

void type_danger() {
	int i = 256;
//	int i = 257;
	char c = (int) i;
	char* cptr = (char*)(&i+1);

	cout << "i: " << i << endl;
	cout << "c: " << c << endl;
	cout << "(int) c: " << (int) c << endl;
	cout << "(int*) cptr: " << (int*) cptr << endl;
	cout << "(int) *cptr: " << (int) *cptr << endl;
}
