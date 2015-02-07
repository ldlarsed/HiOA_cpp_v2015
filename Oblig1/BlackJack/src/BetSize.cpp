/*
 * BetSize.cpp
 *
 *  Created on: 7. feb. 2015
 *      Author: luke
 */

#include "BetSize.h"

BetSize::BetSize() {
	// TODO Auto-generated constructor stub

}

BetSize::~BetSize() {
	// TODO Auto-generated destructor stub
}

/**
 * Returns the money amount og choosen bet option from terminal
 */
int BetSize::getBetAmount(int choosen_option){
	switch(choosen_option){
	case 1:
		return 10;
		break;
	case 2:
		return 20;
		break;
	case 3:
		return 50;
		break;
	default :
		return 0;
		break;
	}
}
