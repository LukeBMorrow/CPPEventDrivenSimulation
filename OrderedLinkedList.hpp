/*
 * Queue.hpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#ifndef ORDEREDLINKEDLIST_HPP_
#define ORDEREDLINKEDLIST_HPP_
#include "Node.hpp"

class OrderedLinkedList{
	public:
		OrderedLinkedList();
		bool isEmpty();
		ListItem* removeTop();
		void addItem(ListItem* newItem);
	private:
		Node* top;
};
#endif /* QUEUE_HPP_ */
