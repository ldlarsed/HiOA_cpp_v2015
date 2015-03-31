//============================================================================
// Name        : main.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <FL/Fl_Window.H>
//#include "fireworks.hpp"
#include "fireworks2.hpp"

using namespace std;

int main(int argc, char** argv) {

	srand(time(NULL));

	int w = Fl::w(), h = Fl::h();
//	int w = 1024, h = 760;
	const char *l = "Luke's Fireworks";

	Fl_Window* window = new Fl_Window { w, h, l };
	window->color(FL_BLACK);

//	fireworks* f = new fireworks { l, w, h, 20 };
	new fireworks2 { l, w, h, 30 };

	Fl::add_timeout((0.04), animation_canvas::timer, window);

	window->end();
	window->show();

	Fl::run();

//	delete l;
//	delete f;
//	delete window;
}
