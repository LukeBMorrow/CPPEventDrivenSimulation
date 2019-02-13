#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Controller{
	private:
		string run(string fileName);
	public:
		Controller(string fileName);
};
