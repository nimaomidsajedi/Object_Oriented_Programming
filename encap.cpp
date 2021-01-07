/*
 * encap.cpp
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#include "encap.h"
#include <math.h>

float encap::get_volume() {
	return M_PI * radius * radius * radius * 4 / 3;
}

float encap::get_surface() {
	return M_PI * radius * radius * 4;
}

void encap::set_radius(float r) {
	radius = r;
}




