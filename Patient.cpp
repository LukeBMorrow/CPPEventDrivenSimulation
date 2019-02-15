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
	patientID=idCounter;
	idCounter++;
	bloodwork=false;
	xRay=false;
	if(diagReq.at(0)=='B'){
		bloodwork=true;
	}
	if(diagReq.at(1)=='X'){
		xRay=true;
	}
}
virtual bool Patient::isGreaterThan(ListItem* other){
	bool result = false;
	if(typeid(other)==typeid(Patient())){//check for safe casting
		Patient* otherPatient = dynamic_cast<Patient*>(&other);//down Cast
		if(otherPatient->getSevarity() == sevarity){
			result = (otherPatient->getPatientID() < patientID);
		}else{
			result = (otherPatient->getSevarity() < sevarity);
		}
	}else{
		cout<<"Error: non-compatible type comparison."<<endl;
	}
	return result;
}
int Patient::getPatientID(){
	return patientID;
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
int Patient::getSevarity(){
	return sevarity;
}
void Patient::bloodWorkDone(){
	bloodwork=false;
}
void Patient::xRaydone(){
	xRay=false;
}
