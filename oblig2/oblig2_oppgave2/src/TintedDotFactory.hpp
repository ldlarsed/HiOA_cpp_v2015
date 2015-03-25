/*
 * TintedDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef TINTEDDOTFACTORY_HPP_
#define TINTEDDOTFACTORY_HPP_

#include "AbstractDotFactory.hpp"

class TintedDotFactory: public AbstractDotFactory {
public:
	TintedDotFactory();
	virtual ~TintedDotFactory();

	 dot* createDot(int x, int y);
};

#endif /* TINTEDDOTFACTORY_HPP_ */
