/*
 * BetSize.h
 *
 *  Created on: 7. feb. 2015
 *      Author: luke
 */

#ifndef BLACKJACK_SRC_BETSIZE_H_
#define BLACKJACK_SRC_BETSIZE_H_

class BetSize {
public:
	BetSize();
	virtual ~BetSize();

	static int getBetAmount(int choosen_option);
};

#endif /* BLACKJACK_SRC_BETSIZE_H_ */
