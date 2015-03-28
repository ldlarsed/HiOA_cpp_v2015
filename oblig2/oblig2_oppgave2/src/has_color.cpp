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

/**
 * Opretter dotter med tilfeldig farge men som har en vekt mot
 * lyse farger som oragne, gult og rødt.
 */
has_color::has_color(bool Random) {

	int r_main = rand() % 3;

	int r = 0, g = 0, b = 0;

	if (r_main == 0) {
		r = 200 + (rand() % 55);
		g = 0 + (rand() % 55);
		b = 0 + (rand() % 55);
	} else if (r_main == 1) {
		r = 0 + (rand() % 55);
		g = 200 + (rand() % 55);
		b = 200 + (rand() % 55);
	} else {
		r = 200 + (rand() % 55);
		g = 200 + (rand() % 55);
		b = 200 + (rand() % 55);
	}

//	std::cout << "r_main: " << r_main << " ";
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

/**
 * Så lang som jeg kan se er den konstruktøren ikke i bruk.
 */
has_color::has_color(ColorPart red, ColorPart green, ColorPart blue) {
	red_ = (ColorPart*) &red;
	green_ = (ColorPart*) &green;
	blue_ = (ColorPart*) &blue;
	color_ = fl_rgb_color(red, green, blue);
}

void has_color::darken_color() {
//	color_ = fl_darker((Fl_Color) color_);
	/*
	 * Originalfunksjonen setter fargen kun til sort.
	 * Setter derfor denne til å bli samme som bakgrunnen.
	 */
	color_ = FL_DARK_BLUE;
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
