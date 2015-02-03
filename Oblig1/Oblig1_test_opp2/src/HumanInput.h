
#ifndef HUMANINPUT_H
#define HUMANINPUT_H

#include <string>

/**
  * class HumanInput
  * Gets inputs and communicates with one or more human players.
  */

class HumanInput
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HumanInput ();

  /**
   * Empty Destructor
   */
  virtual ~HumanInput ();



  /**
   * Gets input for a name for every player in the new game. Takes input of name for
   * every player dependent on the cunmber_of_players parameter.
   * 
   * @param  number_of_players
   */
  void getNames (int number_of_players)
  {
  }


  /**
   * @return int
   */
  int requestBet ()
  {
  }


  /**
   * @return PlayerAction
   * @param  player
   */
  PlayerAction requestGameAction (Player player)
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

#endif // HUMANINPUT_H
