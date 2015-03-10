/*
 * Monster.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef MONSTER_H_
#define MONSTER_H_

#include "Enemy.h"

class Monster: public Enemy {
public:
	Monster();
	virtual ~Monster();

	void attack();
};

#endif /* MONSTER_H_ */
