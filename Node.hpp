/*
 * Node.hpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#ifndef NODE_HPP_
#define NODE_HPP_
#include "ListItem.hpp"
class Node{
	public:
		Node(ListItem* newItem, Node* nextNode);
		Node* getNext();
		void setNext(Node* nextNode);
		ListItem* getItem();
		~Node();
	private:
		Node* next;
		ListItem* item;
};
#endif /* NODE_HPP_ */
