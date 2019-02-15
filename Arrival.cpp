/*
 * Arrival.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */


#include "Arrival.hpp"

Arrival::Arrival(Patient* newPatient, int time, FileProcessor* fileProcessor):Event(newPatient,time,0){
	fileP = fileProcessor;
}
Arrival::Arrival(Patient* newPatient, int time):Event(newPatient,time,0){

}
Event* Arrival::ProcessEvent(){
	return 0;
}
Arrival::~Arrival(){

}
