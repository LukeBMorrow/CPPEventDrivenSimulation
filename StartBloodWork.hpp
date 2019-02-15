/*
 * StartBloodWork.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef STARTBLOODWORK_HPP_
#define STARTBLOODWORK_HPP_

#include "StartEvent.hpp"
#include "BloodWorkTech.hpp"
class StartBloodWork:Event{
	public:
		StartBloodWork(Patient* newPatient,int time,BloodWorkTech* station);
		virtual Event* ProcessEvent();
		virtual ~StartBloodWork();
};



#endif /* STARTBLOODWORK_HPP_ */
