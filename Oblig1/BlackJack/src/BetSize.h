/*
 * BetSize.h
 *
 *  Created on: 7. feb. 2015
 *      Author: luke
 */

#ifndef BETSIZE_H_
#define BETSIZE_H_

class BetSize {
public:
	BetSize();
	virtual ~BetSize();

	static int getBetAmount(int choosen_option);
};

#endif /* BETSIZE_H_ */
