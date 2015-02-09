#ifndef HPLAYER_H
#define HPLAYER_H

#include "Player.h"

class HPlayer: public Player {
public:

	HPlayer();
	HPlayer(int cash, PlayerType player_type, std::string player_name):
		Player(cash, player_type, player_name){
	};
	virtual ~HPlayer();

	void increaseCash(int amount);
	void decreaseCash(int amount);


};

#endif // HPLAYER_H
