/*
 * NormalDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "NormalDotFactory.hpp"


NormalDotFactory::NormalDotFactory() {
	// TODO Auto-generated constructor stub

}

NormalDotFactory::~NormalDotFactory() {
	delete this;
}

dot* NormalDotFactory::createDot(int x, int y){
	return new dot {x,y, 5.0};
}
