/*
 * DotRound.h
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#ifndef DOTROUND_H_
#define DOTROUND_H_

#include "Dot.h"

class Dot_Round: public virtual Dot {
public:
	Dot_Round();
	virtual ~Dot_Round();

	void draw() override;
};

#endif /* DOTROUND_H_ */
