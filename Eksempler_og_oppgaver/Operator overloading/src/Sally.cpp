/*
 * Sally.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#include "Sally.h"

Sally::Sally(){
	num=0;
}

Sally::Sally(int a) {
	num = a;
}

/*
 * Her skal man bruke overlastingen slik at vi med denne operatoren
 * kan plusse på to ting som man skal plusse på inne.
 */
Sally Sally::operator +(Sally aso){
	Sally brandNew;
	brandNew.num = num + aso.num;
	return brandNew;
}


