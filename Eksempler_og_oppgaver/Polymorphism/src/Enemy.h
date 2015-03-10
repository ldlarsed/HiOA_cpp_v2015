/*
 * Enemy.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef ENEMY_H_
#define ENEMY_H_

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	void setAttackPower(int);

protected:
	int attackPower;
};

#endif /* ENEMY_H_ */
