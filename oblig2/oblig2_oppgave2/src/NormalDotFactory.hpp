/*
 * NormalDotFactory.hpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef NORMALDOTFACTORY_HPP_
#define NORMALDOTFACTORY_HPP_

#include "AbstractDotFactory.hpp"

class NormalDotFactory: public AbstractDotFactory {
public:
	NormalDotFactory();
	virtual ~NormalDotFactory();

	virtual dot* createDot(int x, int y)=0;
};

#endif /* NORMALDOTFACTORY_HPP_ */
