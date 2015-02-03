
#ifndef SCORECALC_H
#define SCORECALC_H

#include <string>
class ScoreCalc
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ScoreCalc ();

  /**
   * Empty Destructor
   */
  virtual ~ScoreCalc ();



  /**
   * @return int
   * @param  table_score Actual table score for the player. Basically used only for
   * the ACE to choose betweeen score of 11 or 1.
   * @param  card
   */
  static int requestValue (int table_score, Card card)
  {
  }

protected:

public:

protected:

public:

protected:


private:

public:

private:

public:

private:



};

#endif // SCORECALC_H
