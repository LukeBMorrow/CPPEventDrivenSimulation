#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_
#include <string>
#include "OrderedLinkedList.hpp"
#include "Event.hpp"
#include "Arrival.hpp"
#include "FileProcessor.hpp"
using namespace std;

class Controller{
	private:
		string run(string fileName);
	public:
		Controller(string fileName);
};
#endif
