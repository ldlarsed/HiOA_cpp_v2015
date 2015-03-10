/*
 * Sally.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef SALLY_H_
#define SALLY_H_

class Sally {
public:
	Sally();
	Sally(int);

	/*
	 * Overloader operatoren.
	 * Man bruker nøkkelordet operator og rett direkte etterpå
	 * skriver man hvilken operator som man skal overloade.
	 * Deretter kan man skirve hvilke operator som skal tas inn i denne.
	 */
	Sally operator+(Sally);

public:
	int num;
};

#endif /* SALLY_H_ */
