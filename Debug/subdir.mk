################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../A2Const.cpp \
../Arrival.cpp \
../AtartAssessment.cpp \
../BloodWorkTech.cpp \
../Controller.cpp \
../Doctor.cpp \
../Event.cpp \
../FileProcessor.cpp \
../Main.cpp \
../Node.cpp \
../OrderedLinkedList.cpp \
../Patient.cpp \
../Queue.cpp \
../Staff.cpp \
../StartBloodWork.cpp \
../StartXRay.cpp \
../TriageNurse.cpp \
../XRayTech.cpp 

O_SRCS += \
../Controller.o \
../Main.o 

OBJS += \
./A2Const.o \
./Arrival.o \
./AtartAssessment.o \
./BloodWorkTech.o \
./Controller.o \
./Doctor.o \
./Event.o \
./FileProcessor.o \
./Main.o \
./Node.o \
./OrderedLinkedList.o \
./Patient.o \
./Queue.o \
./Staff.o \
./StartBloodWork.o \
./StartXRay.o \
./TriageNurse.o \
./XRayTech.o 

CPP_DEPS += \
./A2Const.d \
./Arrival.d \
./AtartAssessment.d \
./BloodWorkTech.d \
./Controller.d \
./Doctor.d \
./Event.d \
./FileProcessor.d \
./Main.d \
./Node.d \
./OrderedLinkedList.d \
./Patient.d \
./Queue.d \
./Staff.d \
./StartBloodWork.d \
./StartXRay.d \
./TriageNurse.d \
./XRayTech.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


