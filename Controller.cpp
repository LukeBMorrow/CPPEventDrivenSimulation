#include "Controller.hpp"

Controller::Controller(string fileName){
	cout << run(fileName);
}

string Controller::run(string fileName){//totally works not as needed,
	FileProcessor* fileP = new FileProcessor(fileName);
	OrderedLinkedList* eventList = new OrderedLinkedList();
	//put first arrival from file in event list
	Patient * firstPatient = fileP->nextPatient();
	eventList->addItem(new Arrival(firstPatient,firstPatient->getArrivalTime(),fileP));
	while (!eventList->isEmpty()){
		//remove first event
		//process event
		if(Event* curr = dynamic_cast<Event*>(eventList->removeTop())){//safe downcast
			curr->processEvent();
		}
		//summarize data
	}
	return "EOP";
}

