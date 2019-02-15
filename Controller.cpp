#include "Controller.hpp"

Controller::Controller(string fileName){
	cout << run(fileName);
}

string Controller::run(string fileName){//totally works not as needed,
	ifstream* inFile = new ifstream;
	inFile->open(fileName);
	OrderedLinkedList* eventList = new OrderedLinkedList();
	//put first arrival from file in event list
	do{
		//remove first event
		//process event
		//summarize data
	}while (!eventList->isEmpty());

	return "EOP";
}

