/*
 * StartBloodWork.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */
#include "StartBloodWork.hpp"
StartBloodWork::StartBloodWork(Patient* newPatient,int time,BloodWorkTech* station):Event(newPatient,time,station){

}
Event* StartBloodWork::ProcessEvent(){
	return 0;
}
StartBloodWork::~StartBloodWork(){

}


