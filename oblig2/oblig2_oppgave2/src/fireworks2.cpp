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

	NormalDotFactory* n_factory = new NormalDotFactory();
	BlinkingDotFactory* b_factory = new BlinkingDotFactory();
	TintedDotFactory* t_factory = new TintedDotFactory();
	MixedDotFactory* m_factory = new MixedDotFactory { n_factory, b_factory, t_factory};

//Legger til rockets inn i animation_canvas
	for (int i = 0; i < _rocketcount; i++)
		add(
				new rocket { 200, 5, (rand() % (100 + 400)), (rand() % w),
						(rand() % (h - 400)), m_factory });

}

fireworks2::~fireworks2() {

}
