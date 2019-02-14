/*
 * Queue.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */
#include "Queue.hpp"

Queue::Queue(){
	end = 0;//set end to null
}

void Queue::enqueue(ListItem* item){
	if(end==0){//check if end is null
		end=new Node(item,0);
		end->setNext(end);
	}else{
		end->setNext(new Node(item,end->getNext()));
		end=end->getNext();
	}
}

ListItem* Queue::dequeue(){
	ListItem* result = 0;
	if(end!=0){
		if(end->getNext()==end){
			result = end->getItem();
			end=0;										//MEM CLEAN UP NEEDED HERE
		}else{
			result = (end->getNext())->getItem();		//MEM CLEAN UP NEEDED HERE
			end->setNext((end->getNext())->getNext());
		}
	}
	return result;
}

bool Queue::isEmpty(){
	return end==0;
}
