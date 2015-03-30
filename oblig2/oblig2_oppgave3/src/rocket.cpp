/*
 * rocket.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include "rocket.hpp"


rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y) :
		dotcount(_dotcount), fuse(_fuse) {

	//Fyller rocket med dots
	for (int i = 0; i < _dotcount; i++) {
		dot* _dot = new dot { x, y, dotsize };
		dots.push_back(_dot);
//		delete _dot;
	}
}

rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y,
		AbstractDotFactory* dotFactory) :
		dotcount(_dotcount), fuse(_fuse) {

	//Fyller rocket med dots.
	//OBS! Her finns det minneslekasje
	for (int i = 0; i < _dotcount; i++) {
//		dot* _dot = dotFactory->createDot(x, y);
		//Prøver å kjøre med tinted factory
		dot* _dot = dotFactory->create_dot(x,y);
		dots.push_back(_dot);
	}
}

rocket::~rocket() {
	for(auto i : dots)
		delete i;
	delete this;
}


/**
 * Eksploderer rocketen
 */
void rocket::operator++() {


//Prøver å lage fuse på en annen måte enn med threads
	if (fuse == 0) {
		for (dot* d : dots)
			++(*d);
	} else if (fuse > 0){
		fuse--;
	}
}
