
#ifndef HPLAYER_H
#define HPLAYER_H
#include "Player.h"

#include <string>
#include <vector>



/**
  * class HPlayer
  * Generalization of Player as Human Player
  */

class HPlayer : virtual public Player
{
public:

  HPlayer ();

  virtual ~HPlayer ();

  void increaseCash (int amount);
  void decreaseCash (int amount);

  int cash;


};

#endif // HPLAYER_H
