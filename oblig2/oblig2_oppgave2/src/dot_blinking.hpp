/*
 * dot_blinking.h
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#ifndef DOT_BLINKING_HPP_
#define DOT_BLINKING_HPP_

#include "dot.hpp"

class dot_blinking: public dot {
public:
	using dot::dot;
//	dot_blinking();
//	virtual ~dot_blinking();

	void operator++() override;
};

#endif /* DOT_BLINKING_HPP_ */
