/*
 * Ninja.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */
#include <iostream>
#include "Ninja.h"

Ninja::Ninja() {
	// TODO Auto-generated constructor stub

}

Ninja::~Ninja() {
	// TODO Auto-generated destructor stub
}

void Ninja::attack(){
	std::cout << "I am a ninja - " << attackPower <<std::endl;
}
