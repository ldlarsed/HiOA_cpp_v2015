/*
 * Bank.h
 *
 *  Created on: Feb 3, 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_BANK_H_
#define BLACKJACK_SRC_BANK_H_

#include "Player.h"

class Bank: public Player {
public:
//	Bank();
	Bank():Player(500, PlayerType::Dealer, "Dealer"){};

	virtual ~Bank();

};

#endif /* BLACKJACK_SRC_BANK_H_ */
