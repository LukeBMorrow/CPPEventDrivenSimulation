/*
 * Doctor.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef DOCTOR_HPP_
#define DOCTOR_HPP_
#import "Staff.hpp"
#import "OrderedLinkedList.hpp"

class Doctor:Staff{
	public:
		Doctor(int resourcesAvailable);
		virtual bool resourceAvailable();
	private:
		OrderedLinkedList* waitList;
};



#endif /* DOCTOR_HPP_ */
