/*
 * Node.cpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#import "Node.hpp"
Node::Node(ListItem* newItem, Node* nextNode){
	item = newItem;
	next = nextNode;
}

Node* Node::getNext(){
	return next;
}
void Node::setNext(Node* nextNode){
	next = nextNode;
}
ListItem* Node::getItem(){
	return item;
}

