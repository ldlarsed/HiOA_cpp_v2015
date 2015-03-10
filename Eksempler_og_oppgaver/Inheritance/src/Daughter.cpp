/*
 * Daughter.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */
#include <iostream>
#include "Daughter.h"

using namespace std;

Daughter::Daughter() {
	cout << "I am a daughter constructor!" << endl;
}

Daughter::~Daughter(){
	cout << "I am a daughter deconstructor!" << endl;
}

void Daughter::doSomething(){
	publicv = 2;
	protectedv = 3;
}
