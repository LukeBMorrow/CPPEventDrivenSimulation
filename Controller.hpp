#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "OrderedLinkedList.hpp"
using namespace std;

class Controller{
	private:
		string run(string fileName);
	public:
		Controller(string fileName);
};
#endif
