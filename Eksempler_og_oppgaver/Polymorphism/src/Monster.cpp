/*
 * Monster.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */
#include <iostream>
#include "Monster.h"

Monster::Monster() {
	// TODO Auto-generated constructor stub

}

Monster::~Monster() {
	// TODO Auto-generated destructor stub
}

void Monster::attack(){
	std::cout << "I am a monster - " << attackPower << std::endl;
}
