/*
 * TimingRecords.hpp
 *
 *  Created on: Feb 15, 2019
 *      Author: lukemorrow
 */

#ifndef TIMINGRECORD_HPP_
#define TIMINGRECORD_HPP_
#include "Patient.hpp"


class TimingRecord{
public:
	TimingRecord(int arrivalT, int treatmentDuration, int assessmentDuration);
	void setAssessSt();
	void setAssessEn();
	void setBWSt();
	void setBWEn();
	void setXRaySt();
	void setXRayEn();
	void setTreatSt();
	void setTreatEn();
private:
	Patient* owner;
	int arrivalTime;
	int assessSt;
	int assessDuration;
	int assessEn;
	int bwSt;
	static int bwDuration;//allocated in Controller
	int bwEn;
	int xRaySt;
	static int xRayDuration;//allocated in Controller
	int xRayEn;
	int treatSt;
	int treatDuration;
	int treatEn;
};



#endif /* TIMINGRECORD_HPP_ */
