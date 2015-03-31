/*
 * MixedDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include <iostream>
#include "MixedDotFactory.hpp"
#include "dot_blinking.hpp"
#include "dot_tinted.hpp"

MixedDotFactory::MixedDotFactory(NormalDotFactory* n, BlinkingDotFactory* m) {
	// TODO Auto-generated constructor stub
}

MixedDotFactory::~MixedDotFactory() {
}

dot* MixedDotFactory::createDot(int x, int y){
//	Sluttet her. Skal importere bilbiotek slik at vi får kjørt random
//	på slik at vi får oprette forksjellige typer av dotter.

	int r_mixed = rand() % 3;

//	std::cout << r_mixed;

	if(r_mixed==0)
		return new dot_blinking{x,y, 5.0};
	else if(r_mixed == 1)
		return new dot_tinted{x,y, 5.0, FL_YELLOW};

	return new dot{x,y, 5.0};
}

//dot* MixedDotFactory::create_dot(int x, int y){
//	int r_mixed = rand() % 3;
//
//	//	std::cout << r_mixed;
//
//		if(r_mixed==0)
//			return new dot_blinking{x,y, 5.0};
//		else if(r_mixed == 1)
//			return new dot_tinted{x,y, 5.0, FL_YELLOW};
//
//	return new dot { x, y, 5.0 };
//}
