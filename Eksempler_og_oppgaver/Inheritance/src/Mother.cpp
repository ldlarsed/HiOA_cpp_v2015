/*
 * Mother.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */
#include <iostream>
#include "Mother.h"

using namespace std;

Mother::Mother() {
	cout << "I am a mother constructor!" << endl;
}

Mother::~Mother(){
	cout << "I am a mother deconstructor!" << endl;
}

void Mother::sayName(){
	cout << "Output from mother"<< endl;
}

