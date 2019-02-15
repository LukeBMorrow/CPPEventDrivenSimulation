/*
 * Event.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */

#include "Event.hpp"

Event::Event(Patient* newPatient,int time,Staff* station){
	targetPatient=newPatient;
	timeSlot=time;
	highlightedStation=station;
}

Patient* Event::getPatient(){
	return targetPatient;
}

bool Event::isGreaterThan(Event* other){
	bool result;
	if(other->getTime() == time){
		result= targetPatient->isGreaterThan(other->getPatient());
	}else{
		result = other->getTime()<time;
	}
	return result;
}
