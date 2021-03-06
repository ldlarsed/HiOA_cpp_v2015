/*
 * animation_canvas.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>
#include <FL/Fl.H>
#include <FL/x.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "animation_canvas.hpp"


animation_canvas::animation_canvas(const char *l, int w, int h) :
		Fl_Box(0, 0, 800, 600) {
}

animation_canvas::~animation_canvas() {
	for(auto i : parts)
		delete i;
}

void animation_canvas::add(animated* part) {
	parts.push_back(part);
}

void animation_canvas::timer(void* canvas) {
	Fl::repeat_timeout(0.04, timer, canvas);
	((Fl_Box*) canvas)->redraw();
}

/**
 * Denne skal iterere over vektor på alle ting som skal oppdateres.
 */
void animation_canvas::draw() {

	for (animated* a : parts) {
		++(*a);
	}
}
