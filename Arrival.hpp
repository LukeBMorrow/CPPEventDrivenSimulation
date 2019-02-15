/*
 * Arrival.hpp
 *
 *  Created on: Feb 14, 2019
 *      Author: lukemorrow
 */

#ifndef ARRIVAL_HPP_
#define ARRIVAL_HPP_
#include "Event.hpp"
#include "OrderedLinkedList.hpp"
#include "Patient.hpp"
class Arrival:Event{
public:
		Arrival(OrderedLinkedList* EventList,Patient* newPatient);

};



#endif /* ARRIVAL_HPP_ */
