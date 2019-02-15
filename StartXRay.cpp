/*
 * StartXRay.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */


#include "StartBloodWork.hpp"
StartXRay::StartXRay(Patient* newPatient,int time,XRayTech* station):Event(newPatient,time,station){

}
Event* StartXRay::ProcessEvent(){
	return 0;
}
StartXRay::~StartXRay(){

}

