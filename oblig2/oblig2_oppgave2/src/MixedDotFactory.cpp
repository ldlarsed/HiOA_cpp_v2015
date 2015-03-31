/*
 * MixedDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "MixedDotFactory.hpp"
#include "dot_blinking.hpp"
#include "dot_tinted.hpp"

MixedDotFactory::MixedDotFactory(NormalDotFactory* n, BlinkingDotFactory* m, TintedDotFactory* t) {
	// TODO Auto-generated constructor stub
}

MixedDotFactory::~MixedDotFactory() {
	delete this;
}

dot* MixedDotFactory::createDot(int x, int y){

	int r_mixed = rand() % 3;

	if(r_mixed==0)
		return new dot_blinking{x,y, 5.0};
	else if(r_mixed == 1)
		return new dot_tinted{x,y, 5.0, FL_YELLOW};

	return new dot{x,y, 5.0};
}
