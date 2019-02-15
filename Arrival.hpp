/*
 * Arrival.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef ARRIVAL_HPP_
#define ARRIVAL_HPP_
#include "StartEvent.hpp"
#include "OrderedLinkedList.hpp"
#include "Patient.hpp"
#include "FileProcessor.hpp"

FileProcessor* fileP;

class Arrival:Event{
	public:
		Arrival(Patient* newPatient, int time, FileProcessor* fileProcessor);
		Arrival(Patient* newPatient, int time);
		virtual Event* ProcessEvent();
		virtual ~Arrival();
};



#endif /* ARRIVAL_HPP_ */
