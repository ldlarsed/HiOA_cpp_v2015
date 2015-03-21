//============================================================================
// Name        : fltk_test2.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Fl/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

using namespace std;

class min_box: public Fl_Box {

	int x = 260, y = 80;
	int x2 = 262, y2 = 120;
	int x3 = 360, y3 = 80;
	int x4 = 362, y4 = 120;
	bool turn = false;
	bool turn2 = false;

public:
	using Fl_Box::Fl_Box; //Arver konstruktør (tydligen C++11 syntaks)

	void draw() override {
		fl_color(FL_RED);
		fl_pie(x, y, 80, 120, 0, 360);
		fl_color(FL_RED);
		fl_pie(x3, y3, 80, 120, 0, 360);

		if (!turn) {
			x++, y++, x3++, y3++;
			if (x == 400)
				turn = true;
		} else {
			x--, y--, x3--, y3--;
			if (x == 260)
				turn = false;
		}

		fl_color(FL_BLACK);
		fl_pie(x2, y2, 40, 60, 0, 360);
		fl_color(FL_BLACK);
		fl_pie(x4, y4, 40, 60, 0, 360);

		if (!turn2) {
			x2++, y2++, x4++, y4++;
			if (x2 == 402)
				turn2 = true;
		} else {
			x2--, y2--, x4--, y4--;
			if (x2 == 262)
				turn2 = false;
		}
	}
};

class min_box2: public Fl_Box {

	int x = 60, y = 80;
	int x2 = 62, y2 = 120;
	int x3 = 160, y3 = 80;
	int x4 = 162, y4 = 120;
	bool turn = false;
	bool turn2 = false;

public:
	using Fl_Box::Fl_Box; //Arver konstruktør (tydligen C++11 syntaks)

	void draw() override {
		fl_color(FL_RED);
		fl_pie(x, y, 80, 120, 0, 360);
		fl_color(FL_RED);
		fl_pie(x3, y3, 80, 120, 0, 360);

		fl_color(FL_BLACK);

		if (!turn) {
			x2++;
			if (x2 == 98)
				turn = true;
		} else {
			x2--;
			if (x2 == 62)
				turn = false;
		}

		fl_pie(x2, y2, 40, 60, 0, 360);
		fl_color(FL_BLACK);

		if (!turn2) {
			x4++;
			if (x4 == 198)
				turn2 = true;
		} else {
			x4--;
			if (x4 == 162)
				turn2 = false;
		}

		fl_pie(x4, y4, 40, 60, 0, 360);
	}
};

void kall_opp(void* widget) {
	Fl::repeat_timeout(0.3, kall_opp, widget);
	((Fl_Window*) widget)->redraw();
}

void kall_opp2(void* widget) {
	Fl::repeat_timeout(0.1, kall_opp2, widget);
	((Fl_Window*) widget)->redraw();
}

int main(int argc, char** argv) {

	Fl_Window* window = new Fl_Window { 640, 480, "Luke's Window" };

	min_box *box1 = new min_box { 0, 0, 1, 2 };
	min_box2 *box2 = new min_box2 { 0, 0, 340, 180 };

	Fl::add_timeout(0.3, kall_opp, window);
	Fl::add_timeout(0.1, kall_opp2, window);

	window->end();
	window->show();

	Fl::run();

	delete window;
	delete box1;
	delete box2;

}
