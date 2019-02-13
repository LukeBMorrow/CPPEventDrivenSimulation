#include "Controller.hpp"

Controller::Controller(string fileName){
	cout << run(fileName);
}

string Controller::run(string fileName){//totally works not as needed,
	ifstream* inFile = new ifstream;
	inFile->open(fileName);

	string line;
	string totalLine;
	while ( getline( *inFile, line)){
		totalLine+=line;
	}
	return totalLine+"\n";
}

