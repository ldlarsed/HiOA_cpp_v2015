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

/**
 * Den enkleste konstruktøren til dotten som ikke tar med seg farge
 */
dot::dot(float _x, float _y, float _r) :
		is_vector(_x, _y), has_color(true), r(_r) {

	t=10; //Bruker denne som nedtelling
}

dot::dot(float _x, float _y, float _r, Color c) :
		is_vector(_x, _y), has_color(c), r(_r) {

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

//	int change_col=0;
//
//	if(change_col < 10){
//		change_col++;
//	}else{
//		visibility();
//		change_col=0;
//	}


//	lighten_color();
//	darken_color();
}



void dot::reset() {

}

