#ifndef PATIENT_HPP_
#define PATIENT_HPP_
#include <string>
#include <iostream>
#include "ListItem.hpp"
#include "TimingRecord.hpp"
using namespace std;


static int idCounter=0;
class Patient: public ListItem {
	public:
		Patient(int arrivalT, int assesT, int patPriority,
				string DiagReq,int treatT);
		bool needsBloodwork();
		bool needsXRay();
		int getTreatmentDuration();
		int getArrivalTime();
		int getAssessmentDuration();
		int getSevarity();
		virtual bool isGreaterThan(ListItem* other);
		void bloodWorkDone();
		void xRaydone();
		int getPatientID();
		void setAssessSt(int newTime);
		void setAssessEn(int newTime);
		void setBWSt(int newTime);
		void setBWEn(int newTime);
		void setXRaySt(int newTime);
		void setXRayEn(int newTime);
		void setTreatSt(int newTime);
		void setTreatEn(int newTime);
	private:
		bool bloodwork;
		bool xRay;
		int treatmentDuration;
		int arrivalTime;
		int assessmentDuration;
		int sevarity;
		int patientID;
		TimingRecord* patientStats;
};

#endif
