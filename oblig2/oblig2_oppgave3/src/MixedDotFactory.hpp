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
	/**
	 * Lager disse parametre foreløpig og skal fylle på flere seinere.
	 * Skal kompleteres med tinted factory når denne er ferdig.
	 */
	MixedDotFactory(NormalDotFactory* n, BlinkingDotFactory* m);
	virtual ~MixedDotFactory();

	 dot* createDot(int x, int y);
//	 dot* create_dot(int x, int y);
};

#endif /* MIXEDDOTFACTORY_HPP_ */
