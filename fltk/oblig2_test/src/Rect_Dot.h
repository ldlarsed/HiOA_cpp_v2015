/*
 * RectDot.h
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#ifndef RECT_DOT_H_
#define RECT_DOT_H_

#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>


class Rect_Dot: public Fl_Box {
public:
	using Fl_Box::Fl_Box;
//	Rect_Dot();
	virtual ~Rect_Dot();

	void draw() override;

private:
	int x=100, y=100;
};

#endif /* RECT_DOT_H_ */
