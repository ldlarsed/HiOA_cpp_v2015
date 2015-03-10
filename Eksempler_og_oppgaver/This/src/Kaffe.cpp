/*
 * Kaffe.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#include <iostream>
#include "Kaffe.h"

using namespace std;

Kaffe::Kaffe(int a):b(a) {

}

/*
 * Denne skal skrive ut innhold i b
 */
void Kaffe::printCrap() {
	/*
	 * Her utgår man fra at denne variabeln er egentlig tilgjengelig.
	 */
	cout << "b= " << b << endl;

	/*
	 * Med dette forteller eksakt hvilken variabel som man skal
	 * jobbe med.
	 * Hver gang vi btuker this kommer den verdien kommer til
	 * å lagres i spesiell variable.
	 */
	cout << "this->b= " << this->b << endl;

	/*
	 * Dette kallas for derefferincing a pointer.
	 * Man tar minnesplasseringen av aktuelt objekt.
	 * Deretter man kalle opp variabeln verdi.
	 * Her forteller man at skal skrive ut veriden av b.
	 */
	cout << "(*this).b= " << (*this).b << endl;
}
