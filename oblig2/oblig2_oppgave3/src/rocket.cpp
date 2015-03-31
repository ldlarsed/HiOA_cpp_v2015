/*
 * rocket.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include "rocket.hpp"
#include "TintedDotFactory.hpp"


rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y) :
		dotcount(_dotcount), fuse(_fuse) {

	//Fyller rocket med dots
	for (int i = 0; i < _dotcount; i++) {
//		dot* _dot = new dot { x, y, dotsize };
		dot* _dot = TintedDotFactory<int>::create_dot(x,y);
		dots.push_back(_dot);
	}
}

rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y,
		AbstractDotFactory* dotFactory) :
		dotcount(_dotcount), fuse(_fuse) {

	//Fyller rocket med dots.
	for (int i = 0; i < _dotcount; i++) {
		dot* _dot = dotFactory->createDot(x, y);
		dots.push_back(_dot);
	}
}

rocket::~rocket() {
	for(auto i : dots)
		delete i;
}


/**
 * Eksploderer rocketen
 */
void rocket::operator++() {

	if (fuse == 0) {
		for (dot* d : dots)
			++(*d);
	} else if (fuse > 0){
		fuse--;
	}
}
