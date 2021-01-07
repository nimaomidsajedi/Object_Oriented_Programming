/*
 * encap.h
 *
 *  Created on: Jan 7, 2021
 *      Author: Nima Omidsajedi
 */

#ifndef ENCAP_H_
#define ENCAP_H_

class encap {
public:
	float get_volume();
	float get_surface();
	void set_radius(float r);

private:
	float radius;
};


#endif /* ENCAP_H_ */
