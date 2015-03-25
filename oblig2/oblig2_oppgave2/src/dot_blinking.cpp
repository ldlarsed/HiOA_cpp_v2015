/*
 * dot_blinking.cpp
 *
 *  Created on: Mar 25, 2015
 *      Author: luke
 */

#include "dot_blinking.hpp"

//dot_blinking::dot_blinking() {
//	// TODO Auto-generated constructor stub
//
//}

//dot_blinking::~dot_blinking() {
//	// TODO Auto-generated destructor stub
//}

void dot_blinking::operator ++(){
//	visibility();

	if(blink){
		darken_color();
		blink=false;
	}else{
		lighten_color();
		blink=true;
	}

	dot::operator ++();

}
