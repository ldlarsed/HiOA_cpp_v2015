#ifndef SCORECALC_H
#define SCORECALC_H

#include <string>
#include "Card.h"

class ScoreCalc {
public:

	ScoreCalc();

	virtual ~ScoreCalc();

	/**
	 * @param user_table_score: User's actual table score. Supposed to be used to determine the calue of a hard Ace of soft Ace
	 */
	int requestValue(int user_table_score, Card card);
	std::string wonOrlost(int score);

private:
	int getStandardValue(int user_table_score, Card card);
	int getAceValue(int user_table_score);

};

#endif // SCORECALC_H
