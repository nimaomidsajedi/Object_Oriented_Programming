/*
 * sphere_info.h
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#ifndef SPHERE_INFO_H_
#define SPHERE_INFO_H_

namespace my_unique_encap {
	class sphere_info {
	public:
		float get_volume();
		float get_surface();
		void set_radius(float r);

	private:
		float radius;
	};
}

#endif /* SPHERE_INFO_H_ */
