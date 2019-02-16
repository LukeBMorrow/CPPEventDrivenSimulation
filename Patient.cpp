/*
 * Patient.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */
#include "Patient.hpp"


Patient::Patient(int arrivalT, int assesT, int patPriority,
				string diagReq,int treatT){
	treatmentDuration=treatT;
	arrivalTime=arrivalT;
	assessmentDuration=assesT;
	sevarity=patPriority;
	patientStats = new TimingRecord(arrivalT,assesT,treatT);
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
int Patient::getTreatmentDuration(){
	return treatmentDuration;
}
int Patient::getArrivalTime(){
	return arrivalTime;
}
int Patient::getAssessmentDuration(){
	return assessmentDuration;
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
void Patient::setAssessSt(int newTime){

}
void Patient::setAssessEn(int newTime){

}
void Patient::setBWSt(int newTime){

}
void Patient::setBWEn(int newTime){

}
void Patient::setXRaySt(int newTime){

}
void Patient::setXRayEn(int newTime){

}
void Patient::setTreatSt(int newTime){

}
void Patient::setTreatEn(int newTime){

}
