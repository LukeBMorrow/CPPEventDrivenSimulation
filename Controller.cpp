#include "Controller.hpp"

Controller::Controller(string fileName){
	patients = new OrderedLinkedList();
	TimingRecord::bwDuration=A2Const::bloodWorkTime;
	TimingRecord::xRayDuration=A2Const::XRayTime;
	FileProcessor::patients=patients;
	cout << run(fileName);

}

string Controller::run(string fileName){//totally works not as needed,
	FileProcessor* fileP = new FileProcessor(fileName);
	Arrival::fileP=fileP;//give arrival our file reader
	OrderedLinkedList* eventList = new OrderedLinkedList();
	//put first arrival from file in event list
	Patient * firstPatient = fileP->nextPatient();
	eventList->addItem(new Arrival(firstPatient,firstPatient->getArrivalTime()));
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

