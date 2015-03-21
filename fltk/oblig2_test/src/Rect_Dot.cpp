/*
 * RectDot.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#include "Rect_Dot.h"


Rect_Dot::~Rect_Dot() {
	// TODO Auto-generated destructor stub
}

void Rect_Dot::draw() {
	fl_color(FL_BLUE);
	fl_rectf(x+=2, y++, 100, 100);
}

