/*
 * Event.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef EVENT_HPP_
#define EVENT_HPP_
#include "ListItem.hpp"

class Event:ListItem{
	public:
		Event(ListItem* target);
		int virtual targetID()=0;
		virtual ~Event();
};



#endif /* EVENT_HPP_ */
