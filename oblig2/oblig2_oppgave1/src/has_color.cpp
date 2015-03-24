/*
 * has_color.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include "has_color.hpp"

has_color::has_color(bool Random) {
	color_ = FL_RED;
//	red_ = (ColorPart*) 255;
//	green_ = (ColorPart*) 255;
//	blue_ = (ColorPart*) 255;
}

has_color::has_color(Color start) :
		color_(start) {
	red_ = (ColorPart*) 50;
	green_ = (ColorPart*) 50;
	blue_ = (ColorPart*) 50;
}
