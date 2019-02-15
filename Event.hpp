/*
 * Event.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef EVENT_HPP_
#define EVENT_HPP_
#include "ListItem.hpp"
#include "Staff.hpp"

class Event:ListItem{
	public:
		Event(Patient* newPatient,int time,Staff* station);
		Patient* getPatient();
		bool isGreaterThan(Event* other);
		virtual Event* processEvent()=0;
		int getTime();
		virtual ~Event()=0;
	private:
		Patient* targetPatient;
		int timeSlot;
		Staff* highlightedStation;
};



#endif /* EVENT_HPP_ */
