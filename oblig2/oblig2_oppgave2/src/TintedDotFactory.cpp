/*
 * TintedDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "TintedDotFactory.hpp"

TintedDotFactory::TintedDotFactory() {
	// TODO Auto-generated constructor stub

}

TintedDotFactory::~TintedDotFactory() {
	// TODO Auto-generated destructor stub
}

dot* TintedDotFactory::createDot(int x, int y){
	return new dot {x,y, 2.0};
}
