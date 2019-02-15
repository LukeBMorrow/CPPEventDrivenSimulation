/*
 * FileProcessor.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */

#include "FileProcessor.hpp"


FileProcessor::FileProcessor(string fileName){
	inFile = new ifstream;
	inFile->open(fileName);
}

Patient* FileProcessor::nextPatient(){
		string line;
		int time, assessTime, patPrior,treatTime;
		string diagReq;
		Patient* result=0;
		getline( *inFile, line);
		if(line.at(0)!='#'){
			istringstream *iss = new istringstream(line);
			*iss>>time;
			*iss>>assessTime;
			*iss>>patPrior;
			*iss>>diagReq;
			*iss>>treatTime;
			result = new Patient(time,assessTime,patPrior,diagReq,treatTime);
		}else{
			result = nextPatient();
		}

		return result;
}
