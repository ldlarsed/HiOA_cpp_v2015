/*
 * TintedDotFactory.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "TintedDotFactory.hpp"
#include "dot_tinted.hpp"

TintedDotFactory::TintedDotFactory() {

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

TintedDotFactory::~TintedDotFactory() {
}

dot* TintedDotFactory::createDot(int x, int y) {

//Ratio av den valgte fargen
	int t = rand() % 8;

	if (t < 5)
		return new dot_tinted { x, y, 5.0, colrand };

	return new dot { x, y, 5.0 };
}
