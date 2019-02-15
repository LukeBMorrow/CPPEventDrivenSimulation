/*
 * BloodWorkTech.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef BLOODWORKTECH_HPP_
#define BLOODWORKTECH_HPP_
#import "Staff.hpp"
#import "OrderedLinkedList.hpp"

class BloodWorkTech:Staff{
	public:
		BloodWorkTech(int resourcesAvailable, int serviceTime);
		virtual bool resourceAvailable();
	private:
		OrderedLinkedList* waitList;
};



#endif /* BLOODWORKTECH_HPP_ */
