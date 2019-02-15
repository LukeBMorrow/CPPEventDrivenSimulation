/*
 * AtartAssessment.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */
#include "StartAssessment.hpp"

StartAssessment::StartAssessment(Patient* newPatient,int time,TriageNurse* station):Event(newPatient,time,station){

}
Event* StartAssessment::ProcessEvent(){
	return 0;
}
StartAssessment::~StartAssessment(){

}

