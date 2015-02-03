################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AiPlayer.cpp \
../src/BlackJack.cpp \
../src/Card.cpp \
../src/CardDeck.cpp \
../src/Dealer.cpp \
../src/Game.cpp \
../src/HPlayer.cpp \
../src/HumanInput.cpp \
../src/Player.cpp \
../src/ScoreCalc.cpp \
../src/Test.cpp 

OBJS += \
./src/AiPlayer.o \
./src/BlackJack.o \
./src/Card.o \
./src/CardDeck.o \
./src/Dealer.o \
./src/Game.o \
./src/HPlayer.o \
./src/HumanInput.o \
./src/Player.o \
./src/ScoreCalc.o \
./src/Test.o 

CPP_DEPS += \
./src/AiPlayer.d \
./src/BlackJack.d \
./src/Card.d \
./src/CardDeck.d \
./src/Dealer.d \
./src/Game.d \
./src/HPlayer.d \
./src/HumanInput.d \
./src/Player.d \
./src/ScoreCalc.d \
./src/Test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


