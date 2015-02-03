#ifndef HPLAYER_H
#define HPLAYER_H

#include "Player.h"

class HPlayer: public Player {
public:

	HPlayer();

	virtual ~HPlayer();

	void increaseCash(int amount);
	void decreaseCash(int amount);

private:
	int cash;

};

#endif // HPLAYER_H
