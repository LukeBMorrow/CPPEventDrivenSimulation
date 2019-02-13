/*
 * Patient.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */
#include "Patient.hpp"

Patient::Patient(int arrivalT, int assesT, int patPriority,
				string diagReq,int treatT){

	treatmentTime=treatT;
	arrivalTime=arrivalT;
	assessmentTime=assesT;
	sevarity=patPriority;
	bloodwork=false;
	xRay=false;
	if(diagReq.at(0)=='B'){
		bloodwork=true;
	}
	if(diagReq.at(1)=='X'){
		xRay=true;
	}
}

bool Patient::needsBloodwork(){
	return bloodwork;
}
bool Patient::needsXRay(){
	return xRay;
}
int Patient::getTreatmentTime(){
	return treatmentTime;
}
int Patient::getArrivalTime(){
	return arrivalTime;
}
int Patient::getAssessmentTime(){
	return assessmentTime;
}
int Patient::getSsevarity(){
	return sevarity;
}
