/*
 * StartXRay.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef STARTXRAY_HPP_
#define STARTXRAY_HPP_

#include "StartEvent.hpp"
#include "XRayTech.hpp"
class StartXRay:Event{
	public:
		StartXRay(Patient* newPatient,int time,XRayTech* station);
		virtual Event* ProcessEvent();
		virtual ~StartXRay();
};



#endif /* STARTXRAY_HPP_ */
