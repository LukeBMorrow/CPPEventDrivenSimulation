/*
 * StartAssessment.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef STARTASSESSMENT_HPP_
#define STARTASSESSMENT_HPP_
#include "StartEvent.hpp"
#include "TriageNurse.hpp"

class StartAssessment:Event{
public:
	StartAssessment(Patient* newPatient,int time,TriageNurse* station);
	virtual Event* ProcessEvent();
	virtual ~StartAssessment();
};



#endif /* STARTASSESSMENT_HPP_ */
