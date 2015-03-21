/*
 * Polyg_Dot.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#include "Polyg_Dot.h"



Polyg_Dot::~Polyg_Dot() {
	// TODO Auto-generated destructor stub
}

void Polyg_Dot::draw() {
	fl_color(FL_GREEN);
	fl_polygon(x1++, y1++, x2++, y2++, x3++, y3++);
}
