/*
 * BlinkingDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef BLINKINGDOTFACTORY_HPP_
#define BLINKINGDOTFACTORY_HPP_

#include "AbstractDotFactory.hpp"

class BlinkingDotFactory: public AbstractDotFactory {
public:
	BlinkingDotFactory();
	virtual ~BlinkingDotFactory();

	 dot* createDot(int x, int y);
	 dot* create_dot(int x, int y);
};

#endif /* BLINKINGDOTFACTORY_HPP_ */
