/*
 * Bank.h
 *
 *  Created on: Feb 3, 2015
 *      Author: luke
 */

#ifndef BANK_H_
#define BANK_H_

#include "Player.h"

class Bank: public Player {
public:
//	Bank();
	Bank():Player(500, PlayerType::Dealer, "Dealer"){};

	virtual ~Bank();

};

#endif /* BANK_H_ */
