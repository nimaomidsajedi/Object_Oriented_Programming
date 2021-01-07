/*
 * sphere_info.cpp
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#include "sphere_info.h"
#include <math.h>

namespace my_unique_encap {
	float sphere_info::get_volume() {
		return M_PI * radius * radius * radius * 4 / 3;
	}

	float sphere_info::get_surface() {
		return M_PI * radius * radius * 4;
	}

	void sphere_info::set_radius(float r) {
		radius = r;
	}
}





