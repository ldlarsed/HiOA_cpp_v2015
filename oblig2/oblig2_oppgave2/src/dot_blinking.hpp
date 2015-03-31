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

	void operator++() override;

private:
	bool blink=true;
};

#endif /* DOT_BLINKING_HPP_ */
