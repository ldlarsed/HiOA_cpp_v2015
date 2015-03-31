/*
 * MixedDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef MIXEDDOTFACTORY_HPP_
#define MIXEDDOTFACTORY_HPP_

#include "BlinkingDotFactory.hpp"
#include "NormalDotFactory.hpp"
#include "TintedDotFactory.hpp"

class MixedDotFactory: public AbstractDotFactory  {
public:

	MixedDotFactory(NormalDotFactory* n, BlinkingDotFactory* m, TintedDotFactory* t);
	virtual ~MixedDotFactory();

	 dot* createDot(int x, int y);
};

#endif /* MIXEDDOTFACTORY_HPP_ */
