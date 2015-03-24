//============================================================================
// Name        : main.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "fireworks.hpp"

using namespace std;

int main(int argc, char** argv) {

	srand(time(NULL));

	int w = 800, h = 600;
	const char *l = "Test window";

	Fl_Window* window = new Fl_Window { w, h, l };
	fireworks* f = new fireworks { l, w, h, 5 };

	Fl::add_timeout(0.1, animation_canvas::timer, window);

	window->end();
	window->show(argc, argv);


	Fl::run();

}
