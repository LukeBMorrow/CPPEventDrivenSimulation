/*
 * listItem.hpp
 *
 *  Created on: Feb 13, 2019
 *      Author: lukemorrow
 */

#ifndef LISTITEM_HPP_
#define LISTITEM_HPP_

class ListItem{
	public:
		virtual bool isGreaterThan(ListItem* item)=0;
		virtual ~ListItem();
};



#endif /* LISTITEM_HPP_ */
