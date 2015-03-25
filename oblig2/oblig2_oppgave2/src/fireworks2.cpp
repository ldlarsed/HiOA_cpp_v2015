/*
 * fireworks.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>
#include "fireworks2.hpp"
#include "rocket.hpp"
#include "NormalDotFactory.hpp"
#include "BlinkingDotFactory.hpp"
#include "TintedDotFactory.hpp"
#include "MixedDotFactory.hpp"

fireworks2::fireworks2(const char* title, int w, int h, int _rocketcount) :
		animation_canvas(title, w, h), rocketcount(_rocketcount) {


AbstractDotFactory* n_factory = new NormalDotFactory();
AbstractDotFactory* b_factory = new BlinkingDotFactory();
AbstractDotFactory* t_factory = new TintedDotFactory();
MixedDotFactory* m_factory = new MixedDotFactory();

//Legger til rockets inn i animation_canvas
	for (int i = 0; i < _rocketcount; i++)
		add(new rocket { 200, 5, (rand() % 50), (rand() % w), (rand() % h-200), b_factory});


}

fireworks2::~fireworks2() {

}
