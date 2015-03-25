/*
 * MixedDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "MixedDotFactory.hpp"

MixedDotFactory::MixedDotFactory() {
	// TODO Auto-generated constructor stub

}

MixedDotFactory::~MixedDotFactory() {
	// TODO Auto-generated destructor stub
}

dot* MixedDotFactory::createDot(int x, int y){
	return new dot {x,y, 2.0};
}
