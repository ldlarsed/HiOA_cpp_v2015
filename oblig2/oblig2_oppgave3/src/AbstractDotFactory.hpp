/*
 * AbstractDotFactory.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef ABSTRACTDOTFACTORY_HPP_
#define ABSTRACTDOTFACTORY_HPP_

#include "dot.hpp"

class AbstractDotFactory {

public:
	AbstractDotFactory();
	virtual ~AbstractDotFactory();

	/**
	 * Foreløpig gjør jeg om denne slik at denne metoden ikke
	 * er påkrevd for implementasjon. Følgende tilpassning brukes kun i oppgave 3.
	 *
	 */
	virtual dot* createDot(int x, int y)=0;
	virtual dot* create_dot(int x, int y)=0;
};

#endif /* ABSTRACTDOTFACTORY_HPP_ */
