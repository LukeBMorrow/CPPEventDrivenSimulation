/*
 * FileProcessor.hpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */

#ifndef FILEPROCESSOR_HPP_
#define FILEPROCESSOR_HPP_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Patient.hpp"
using namespace std;


class FileProcessor{
	public:
		FileProcessor(string fileName);
		Patient* nextPatient();
	private:
		ifstream* inFile;
		static OrderedLinkedList* patients;
};



#endif /* FILEPROCESSOR_HPP_ */
