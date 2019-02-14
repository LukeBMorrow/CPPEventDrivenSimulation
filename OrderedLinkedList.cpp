/*
 * OrderedLinkedList.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */


#import "OrderedLinkedList.hpp"

OrderedLinkedList::OrderedLinkedList(){
	top=0;
}

bool OrderedLinkedList::isEmpty(){
	return top==0;
}

ListItem* OrderedLinkedList::removeTop(){
	ListItem* result = top->getItem();
	top=top->getNext();					//CLEAN UP MEM HERE
	return result;
}

void OrderedLinkedList::addItem(ListItem* newItem){
	Node* curr = top;
	Node* prev = 0;
	while(curr!=0 && (curr->getItem())->getPriority() < newItem->getPriority() ){
		prev = curr;
		curr=curr->getNext();
	}
	//case: only item / first item
	if(prev == 0){
		top = new Node(newItem,top);
	}else{//case: otherwise
		prev->setNext(new Node(newItem,prev->getNext()));
	}
}
