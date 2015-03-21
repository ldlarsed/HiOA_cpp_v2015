/*
 * Dot.cpp
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#include "Round_Dot.h"

//Round_Dot::Dot() {
//	// TODO Auto-generated constructor stub
//
//}

Round_Dot::~Round_Dot() {
	// TODO Auto-generated destructor stub
}

void Round_Dot::draw() {

	fl_color(FL_RED);
	fl_pie(x++, y++, 80, 120, 0, 360);
}

