//============================================================================
// Name        : Innebygde_primitive_typer.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>

using namespace std;

void print_ascii_table() {
	cout << endl << "Printig out ascii table" << endl;
	int count = 1;
	for (int var = 33; var <= 255; var++) {
		char c = var;
		if (count % 10 == 0)
			cout << endl;
		printf("%d : %c\t", var, c);
		count++;
	}
}

int main() {

	float f;
	int i;
	char c;
	double d;

	cout << "Size of float: " << sizeof(f) << endl;
	cout << "Size of int: " << sizeof(i) << endl;
	cout << "Size of char: " << sizeof(c) << endl;
	cout << "Size of double: " << sizeof(d) << endl;

	int* itpr;
	char* cptr;

	cout << "Size of int pointer: " << sizeof(itpr) << endl;
	cout << "Size of char pointer: " << sizeof(cptr) << endl;

	cout << endl << "Content of all variables" << endl;
	cout << "float: " << f << endl;
	cout << "int: " << i << endl;
	cout << "char: " << c << endl;
	cout << "double: " << d << endl;
	cout << "itpr: " << itpr << endl;
	cout << "cptr: " << cptr << endl;

	//STørrelsen på datatype har ingen brtydning ved konvertering. Det blir kun lagret de bytes som får plass i den nye datatypen

	float f2 = c;

	print_ascii_table();

	return 0;
}

