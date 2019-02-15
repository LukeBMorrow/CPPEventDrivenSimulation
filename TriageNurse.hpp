/*
 * TriageNurse.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef TRIAGENURSE_HPP_
#define TRIAGENURSE_HPP_
#import "Staff.hpp"
#import "Queue.hpp"
class TriageNurse:Staff{
	public:
		TriageNurse(int resourcesAvailable);
		virtual bool resourceAvailable();
	private:
		Queue* waitList;
};



#endif /* TRIAGENURSE_HPP_ */
