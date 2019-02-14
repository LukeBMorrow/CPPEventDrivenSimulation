#ifndef PATIENT_HPP_
#define PATIENT_HPP_
#include <string>
#include "ListItem.hpp"
using namespace std;

int idCounter=0;

class Patient: public ListItem {
	public:
		Patient(int arrivalT, int assesT, int patPriority,
				string DiagReq,int treatT);
		bool needsBloodwork();
		bool needsXRay();
		int getTreatmentTime();
		int getArrivalTime();
		int getAssessmentTime();
		int getSsevarity();
	private:
		bool bloodwork;
		bool xRay;
		int treatmentTime;
		int arrivalTime;
		int assessmentTime;
		int sevarity;
		int patientID;
};
#endif
