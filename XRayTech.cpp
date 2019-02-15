/*
 * XRayTech.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */



#import "XRayTech.hpp"
XRayTech::XRayTech(int resourcesAvailable,int serviceTime):Staff(resourcesAvailable){
	waitList = new OrderedLinkedList();
	serviceT = serviceTime;
}

bool XRayTech::resourceAvailable(){
	return true;
}
