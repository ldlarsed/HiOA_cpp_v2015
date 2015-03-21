/*
 * Dot.h
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#ifndef ROUND_DOT_H_
#define ROUND_DOT_H_

#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

class Round_Dot: public Fl_Box {
public:
	using Fl_Box::Fl_Box;
//	Dot();
	virtual ~Round_Dot();

	void draw() override;

private:
	int x=160, y= 80;
};

#endif /* ROUND_DOT_H_ */
