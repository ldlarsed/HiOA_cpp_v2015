/*
 * fireworks.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include "fireworks.hpp"
#include "rocket.hpp"

fireworks::fireworks(const char* title, int w, int h, int _rocketcount) :
		animation_canvas(title, w, h), rocketcount(_rocketcount) {

//Legger til rockets inn i animation_canvas
	for (int i = 0; i < _rocketcount; i++)
		add(new rocket { 200, 5, (rand() % 50), (rand() % w), (rand() % h-200)});
}

fireworks::~fireworks() {
}
