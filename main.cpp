/*
 * main.cpp
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
#include <string>
#include "sphere_info.h"
using namespace std;
using my_unique_encap::sphere_info;

int main() {
	float radius_num = 10;

	sphere_info sphere;
	sphere.set_radius(radius_num);

	float volume = sphere.get_volume();
	float surface = sphere.get_surface();
	cout << "Sphere with radius= " << radius_num << " has the Volume equal to= " << volume << endl;
	cout << "Sphere with radius= " << radius_num << " has the Surface equal to= " << surface << endl;

	return 0;
}



