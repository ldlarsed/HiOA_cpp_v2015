
#ifndef AIPLAYER_H
#define AIPLAYER_H
#include "Player.h"

#include <string>
class AiPlayer : virtual public Player
{
public:

  AiPlayer (int cash, PlayerType player_type, std::string player_name);

  virtual ~AiPlayer ();



};

#endif // AIPLAYER_H
