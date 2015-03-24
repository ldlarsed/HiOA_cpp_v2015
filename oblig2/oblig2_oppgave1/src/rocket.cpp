/*
 * rocket.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>

#include "rocket.hpp"

rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y) :
		dotcount(_dotcount), fuse(_fuse) {

	std::cout << "rocket starter" << std::endl;

	//Fyller rocket med dots
	for (int i = 0; i < _dotcount; i++){
		dot* _dot = new dot { x, y, dotsize };
		dots.push_back(_dot);
	}



}

rocket::~rocket() {

}

/**
 * Eksploderer rocketen
 */
void rocket::operator++() {
	for(dot* d : dots)
		++(*d);
}
