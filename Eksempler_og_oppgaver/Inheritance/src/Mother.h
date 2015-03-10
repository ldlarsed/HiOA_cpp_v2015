/*
 * Mother.h
 *
 *  Created on: Mar 10, 2015
 *      Author: luke
 */

#ifndef MOTHER_H_
#define MOTHER_H_


class Mother {
public:
	Mother();
	void sayName();
	int publicv;
	~Mother();

/*
 * Dersom man bruker protected så får alle subclasser tilgang til disse
 * variabler. Provate variablen vil ikke ha access fra subklasser.
 * Derfor kan man bruke protected for slik endamål.
 */
protected:
	int protectedv;

private:
	int privatev;

};

#endif /* MOTHER_H_ */
