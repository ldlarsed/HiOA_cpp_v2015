/*
 * dot.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include "dot.hpp"
#include <iostream>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

dot::dot(float _x, float _y, float _r) :
		is_vector(_x, _y), has_color(true), r(_r) {

	t=10; //Bruker denne som nedtelling
}

dot::~dot() {

}

void dot::draw() {

	fl_color(color());
	fl_pie(x(),y(),r,r,0,360);

}

void dot::operator ++() {
	increment_position();
	draw();
}

void dot::reset() {

}

