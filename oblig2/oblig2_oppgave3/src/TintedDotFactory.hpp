/*
 * TintedDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef TINTEDDOTFACTORY_HPP_
#define TINTEDDOTFACTORY_HPP_

#include "AbstractDotFactory.hpp"
#include "dot_tinted.hpp"

template<class T>
class TintedDotFactory: public AbstractDotFactory {



	Fl_Color colrand;
public:
	TintedDotFactory();
	virtual ~TintedDotFactory();

	dot* createDot(int x, int y);
	static dot* create_dot(int x, int y);



};

template<class T>
TintedDotFactory<T>::TintedDotFactory() {

	int p = rand() % 3;

	switch (p) {
	case 0:
		colrand = FL_GREEN;
		break;
	case 1:
		colrand = FL_RED;
		break;
	case 2:
		colrand = FL_YELLOW;
		break;
	default:
		colrand = FL_WHITE;
		break;
	}
}

template<class T>
TintedDotFactory<T>::~TintedDotFactory() {
	// TODO Auto-generated destructor stub
}

template<class T>
dot* TintedDotFactory<T>::createDot(int x, int y) {

//Ratio av den valgte fargen
	int t = rand() % 8;

	if (t < 5)
		return new dot_tinted { x, y, 5.0, colrand };

	return new dot { x, y, 5.0 };
}

template<class T>
dot* TintedDotFactory<T>::create_dot(int x, int y){

	return new dot_tinted { x, y, 5.0, FL_WHITE };
}


#endif /* TINTEDDOTFACTORY_HPP_ */
