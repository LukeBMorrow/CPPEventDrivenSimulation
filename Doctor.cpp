/*
 * Doctor.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */




#import "Doctor.hpp"
Doctor::Doctor(int resourcesAvailable):Staff(resourcesAvailable){
	waitList = new OrderedLinkedList();
}

bool Doctor::resourceAvailable(){
	return true;
}
