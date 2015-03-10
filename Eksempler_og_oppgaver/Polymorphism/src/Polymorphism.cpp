//============================================================================
// Name        : Polymorphism.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ninja.h"
#include "Monster.h"


using namespace std;

int main() {

	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);

	n.attack();
	m.attack();
}
