//============================================================================
// Name        : oblig2_test.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

#include "Rect_Dot.h"
#include "Round_Dot.h"
#include "Polyg_Dot.h"

using namespace std;

void move_dot(void* widget) {
	Fl::repeat_timeout(0.1, move_dot, widget);
	/*
	 * Kommentere bort denne linjen ettersom den klager hele tiden på at det ikke fungerer.
	 * Det er ganske rart ettersom alt er importert alerede. Samme gjelder også dersom jeg kaller opp funksjonen
	 * window->end() som den ikke heller finner men finner alle andre funksjoner som finnes i dette biblioteket.
	 * Det kan også hende noen av de funksjoner som fungerer her blir helt enkelt arvet fra andre plasser.
	 */
//	((Fl_Window*) widget)->redraw();
}

int main(int argc, char** argv) {

	Fl_Window* window = new Fl_Window { 860, 600, "Oblig 2 Test" };

	Round_Dot *dot1 = new Round_Dot { 0, 0, 200, 200 };
	Rect_Dot *dot2 = new Rect_Dot { 0, 0, 100, 100 };
	Polyg_Dot *dot3 = new Polyg_Dot { 0, 0, 100, 100 };

	Fl::add_timeout(0.1, move_dot, window);

	window->show();
	Fl::run();

	//Deleters
	delete dot1;
	delete dot2;
	delete dot3;
	delete window;

}
