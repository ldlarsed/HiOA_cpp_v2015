/*
 * has_color.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "has_color.hpp"

Color color_tmp = FL_DARK_BLUE;

has_color::has_color(bool Random) {
	int r = 200 + (random() % 55);
	int g = 100 + (random() % 100);
	int b = 100 + (random() % 100);
//	std::cout << "r: " << r << " ";
//	std::cout << "g: " << g << " ";
//	std::cout << "b: " << b << std::endl;

	color_ = fl_color_cube(r * (FL_NUM_RED - 1) / 255,
			g * (FL_NUM_GREEN - 1) / 255, b * (FL_NUM_BLUE - 1) / 255);
}

has_color::has_color(Color start) :
		color_(start) {
	red_ = (ColorPart*) &start;
	green_ = (ColorPart*) &start;
	blue_ = (ColorPart*) &start;
}

has_color::has_color(ColorPart red, ColorPart green, ColorPart blue) {
	red_ = (ColorPart*) &red;
	green_ = (ColorPart*) &green;
	blue_ = (ColorPart*) &blue;
	color_ = fl_rgb_color(red, green, blue);
}

void has_color::darken_color() {
	color_ = fl_darker(color_);
}

void has_color::lighten_color() {
	color_ = fl_lighter(color_);
}

float has_color::visibility() {

	if (color_tmp != color_) {
		color_ = FL_DARK_BLUE;
		color_tmp = color_;
		std::cout << "Ny farge: " << color_ << std::endl;
		return 0.0;
	} else {
		color_ = FL_GREEN;
		color_tmp = FL_DARK_BLUE;
		std::cout << "Ny farge: " << color_ << std::endl;
	}
	return 1.0;
}
