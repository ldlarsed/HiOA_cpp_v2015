/*
 * AbstractDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef ABSTRACTDOTFACTORY_HPP_
#define ABSTRACTDOTFACTORY_HPP_

#include "dot.hpp"

class AbstractDotFactory {

public:
	AbstractDotFactory();
	virtual ~AbstractDotFactory();

	virtual dot* createDot(int x, int y)=0;
};

#endif /* ABSTRACTDOTFACTORY_HPP_ */
