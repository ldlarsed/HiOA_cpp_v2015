/*
 * BlinkingDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "BlinkingDotFactory.hpp"
#include "dot_blinking.hpp"

BlinkingDotFactory::BlinkingDotFactory() {
	// TODO Auto-generated constructor stub

}

BlinkingDotFactory::~BlinkingDotFactory() {
}

dot* BlinkingDotFactory::createDot(int x, int y){
	return new dot_blinking {x,y, 5.0};
}
