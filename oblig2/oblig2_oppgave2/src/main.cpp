//============================================================================
// Name        : main.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
//#include "fireworks.hpp"
#include "fireworks2.hpp"

using namespace std;

int main(int argc, char** argv) {

	srand(time(NULL));

//	int w = Fl::w(), h = Fl::h();
	int w = 1024, h = 760;
	const char *l = "Luke's Fireworks";

	Fl_Window* window = new Fl_Window { w, h, l };
	window->color(FL_DARK_BLUE);

//	fireworks* f = new fireworks { l, w, h, 20 };
	fireworks2* f = new fireworks2 { l, w, h, 30 };

	Fl::add_timeout((0.04), animation_canvas::timer, window);

	window->end();
	window->show(argc, argv);

	Fl::run();


	delete f;
	delete window;


}
