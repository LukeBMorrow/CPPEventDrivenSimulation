#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_
#include <string>
#include "OrderedLinkedList.hpp"
#include "Event.hpp"
#include "Arrival.hpp"
#include "FileProcessor.hpp"
#include "Patient.hpp"
#include "A2Const.hpp"
using namespace std;

class Controller{
	private:
		string run(string fileName);
		OrderedLinkedList* patients;
	public:
		Controller(string fileName);
};
#endif
