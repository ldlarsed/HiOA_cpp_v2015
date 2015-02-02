################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Card.cpp \
../src/CardDeck.cpp \
../src/Oblig1_test_opp2.cpp \
../src/Test.cpp 

OBJS += \
./src/Card.o \
./src/CardDeck.o \
./src/Oblig1_test_opp2.o \
./src/Test.o 

CPP_DEPS += \
./src/Card.d \
./src/CardDeck.d \
./src/Oblig1_test_opp2.d \
./src/Test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


