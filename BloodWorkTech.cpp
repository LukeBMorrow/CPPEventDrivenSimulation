/*
 * BloodWorkTech.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */


#import "BloodWorkTech.hpp"
BloodWorkTech::BloodWorkTech(int resourcesAvailable, int serviceTime):Staff(resourcesAvailable){
	waitList = new OrderedLinkedList();
	serviceT = serviceTime();
}

bool BloodWorkTech::resourceAvailable(){
	bool result=true;
	for(int i=0;i<availability.size();i++){
		result= result&&availability[i];
	}
	return result;

}

