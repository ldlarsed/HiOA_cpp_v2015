#ifndef SCORECALC_H
#define SCORECALC_H

#include <string>
#include "Card.h"

class ScoreCalc {
public:

	ScoreCalc();

	virtual ~ScoreCalc();

	static int requestValue(int table_score, Card card);

private:

};

#endif // SCORECALC_H
