/*
 * TriageNurse.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */

#import "TriageNurse.hpp"
TriageNurse::TriageNurse(int resourcesAvailable):Staff(resourcesAvailable){
	waitList = new Queue();
}

bool TriageNurse::resourceAvailable(){
	return true;
}

