#include <string>
using namespace std;

class Patient{
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
};
