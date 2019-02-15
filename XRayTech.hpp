/*
 * XRayTech.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef XRAYTECH_HPP_
#define XRAYTECH_HPP_
#import "Staff.hpp"
#import "OrderedLinkedList.hpp"

class XRayTech:Staff{
	public:
		XRayTech(int resourcesAvailable, int serviceTime);
		virtual bool resourceAvailable();
	private:
		OrderedLinkedList* waitList;
		int serviceT;
};



#endif /* XRAYTECH_HPP_ */
