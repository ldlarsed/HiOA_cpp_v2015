/*
 * Polyg_Dot.h
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#ifndef POLYG_DOT_H_
#define POLYG_DOT_H_

#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

class Polyg_Dot: public Fl_Box {
public:
	using Fl_Box::Fl_Box;
//	Polyg_Dot();
	virtual ~Polyg_Dot();

	void draw() override;

private:
	int x1=0, y1=0, x2=0, y2=100, x3=100, y3=0;
};

#endif /* POLYG_DOT_H_ */
