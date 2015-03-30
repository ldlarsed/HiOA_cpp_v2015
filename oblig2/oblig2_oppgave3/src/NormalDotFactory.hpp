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

	dot* createDot(int x, int y);
	dot* create_dot(int x, int y);
};

#endif /* NORMALDOTFACTORY_HPP_ */
