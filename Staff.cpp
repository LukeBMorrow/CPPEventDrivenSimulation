/*
 * Staff.cpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#include "Staff.hpp"

Staff::Staff(int numResources){
	availability = new bool[numResources];
	for(int i=0;i<numResources;i++){
		availability[i]=true;
	}//initialize all availability to true b/c no one is currently being served
}


