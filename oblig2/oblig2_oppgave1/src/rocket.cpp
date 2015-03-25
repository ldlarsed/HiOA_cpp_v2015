/*
 * rocket.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <thread>
#include <pthread.h>
#include "rocket.hpp"

pthread_t thread;

rocket::rocket(int _dotcount, int dotsize, int _fuse, int x, int y) :
		dotcount(_dotcount), fuse(_fuse) {

	//Fyller rocket med dots
	for (int i = 0; i < _dotcount; i++) {
		dot* _dot = new dot { x, y, dotsize };
		dots.push_back(_dot);
	}

}

rocket::~rocket() {
}

void *countDown(void *lunte) {
//	sleep(2);
	sleep((int&) lunte);
	std::cout << "Thread sleeping: " << (int&) lunte << std::endl;
	pthread_join(thread, NULL);
//	pthread_exit(NULL);
}

/**
 * Eksploderer rocketen
 */
void rocket::operator++() {

	if (fuse > 0) {
		pthread_create(&thread, NULL, countDown, (void*) fuse);
//		countDown(&fuse);
//		sleep(fuse);
//		fuse=0;
//		pthread_join(t, NULL);
		fuse = 0;
	} else {
		for (dot* d : dots)
			++(*d);
	}
}
