/*
 * Daughter.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef DAUGHTER_H_
#define DAUGHTER_H_

#include "Mother.h"

class Daughter: public Mother {
public:
	Daughter();
	~Daughter();
	void doSomething();
};

#endif /* DAUGHTER_H_ */
