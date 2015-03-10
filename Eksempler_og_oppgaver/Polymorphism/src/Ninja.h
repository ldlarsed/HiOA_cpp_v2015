/*
 * Ninja.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef NINJA_H_
#define NINJA_H_

#include "Enemy.h"

class Ninja: public Enemy {
public:
	Ninja();
	virtual ~Ninja();

	void attack();
};

#endif /* NINJA_H_ */
