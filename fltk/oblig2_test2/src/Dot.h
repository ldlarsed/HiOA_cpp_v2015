/*
 * Dot.h
 *
 *  Created on: Mar 18, 2015
 *      Author: luke
 */

#ifndef DOT_H_
#define DOT_H_

#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

virtual class Dot: public Fl_Box {
public:
using Fl_Box::Fl_Box;
//	Dot();
	virtual ~Dot();

	/**
	 * Med virtual her skal det bety at vi må ovveride denne funksjonen
	 * i de klasser som arver denne klassen her.
	 */
	virtual void draw() override;
};

#endif /* DOT_H_ */
