/*
 * Staff.hpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#ifndef STAFF_HPP_
#define STAFF_HPP_
#include"Patient.hpp"
#include <array>

class Staff{
	public:
		Staff(int numResources);
		virtual bool resourceAvailable()=0;
		virtual ~Staff();
	private:
		std::array availability;//this type of array might give some trouble
};



#endif /* STAFF_HPP_ */
