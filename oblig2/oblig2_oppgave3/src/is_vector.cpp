/*
 * is_vector.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: luke
 */
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "is_vector.hpp"

is_vector::is_vector(double x, double y) {
	this->x_orig_ = x;
	this->y_orig_ = y;
	this->x_ = x;
	this->y_ = y;

	direction_ = rand() % 360;
	speed_ = (double) (5 + rand() % 8);
}

void is_vector::increment_position() {

	if (speed_ >= 0) {
		if (direction_ >= 0 && direction_ <= 90) {
			x_ += cos(direction_) * speed_;
			y_ += sin(direction_) * speed_;
			speed_ -= 0.025 + (1 / speed_);
		} else if (direction_ > 90 && direction_ <= 180) {
			x_ -= cos(direction_) * speed_;
			y_ += sin(direction_) * speed_;
			speed_ -= 0.025 + (1 / speed_);
		} else if (direction_ < 270) {
			x_ -= cos(direction_) * speed_;
			y_ -= sin(direction_) * speed_;
			speed_ -= 0.025 + (1 / speed_);
		} else {
			x_ += cos(direction_) * speed_;
			y_ -= sin(direction_) * speed_;
			speed_ -= 0.025 + (1 / speed_);
		}
	}
}
