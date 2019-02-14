/*
 * Queue.hpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#ifndef QUEUE_HPP_
#define QUEUE_HPP_
#include "ListItem.hpp"
#include "Node.hpp"

class Queue{
	public:
		Queue();
		bool isEmpty();
		ListItem* dequeue();
		void enqueue(ListItem* item);
	private:
		Node* end;
};



#endif /* QUEUE_HPP_ */
