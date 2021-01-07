/*
 * main.cpp
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#include "encap.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	float radius_num = 10;

	encap sphere;
	sphere.set_radius(radius_num);

	float volume = sphere.get_volume();
	float surface = sphere.get_surface();
	cout << "Sphere with radius= " << radius_num << " has the Volume equal to= " << volume << endl;
	cout << "Sphere with radius= " << radius_num << " has the Surface equal to= " << surface << endl;

	return 0;
}



