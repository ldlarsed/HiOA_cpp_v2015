/*
 * fireworks.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>
#include "fireworks.hpp"
#include "rocket.hpp"

fireworks::fireworks(const char* title, int w, int h, int _rocketcount) :
		animation_canvas(title, w, h), rocketcount(_rocketcount) {

//	std::cout << "fireworks starter" << std::endl;


//	animation_canvas* a_canv = new animation_canvas { title, w, h };

//Legger til rockets inn i animation_canvas
	for (int i = 0; i < _rocketcount; i++)
		add(new rocket { 200, 5, (rand() % (100 + 400)), (rand() % w),
		(rand() % (h - 400))});


}

fireworks::~fireworks() {
	delete this;
}
