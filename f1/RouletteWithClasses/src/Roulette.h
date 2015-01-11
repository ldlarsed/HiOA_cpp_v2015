/*
 * Roulette.h
 *
 *  Created on: Jan 11, 2015
 *      Author: luke
 */

#ifndef ROULETTE_H_
#define ROULETTE_H_

class Roulette {

private:
	int spin_count;
	int MIN, MAX;
	int MAX_LENGTH;
	//int seq[];
	int largest_seq_present;
	int c_red, c_black; //0 = red, 1 = black

	void countColor(int numb);
	int getRandom();
	void createSequences();

public:
	Roulette();
	Roulette(int spins);
	virtual ~Roulette();

	void showResults();
};

#endif /* ROULETTE_H_ */
