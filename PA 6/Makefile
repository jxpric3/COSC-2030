# COSC 2030 — PA 6: Employee class hierarchy
# Author: Joshua Price
#
# Usage:
#   make         build the program (pa6.out)
#   make run     build if needed, then run it
#   make clean   delete compiled files
#
# Requires: g++ with C++17 support, GNU make

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
OBJS = main.o Employee.o ProductionWorker.o ShiftSupervisor.o TeamLeader.o
TARGET = pa6.out

.PHONY: run clean

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

run: $(TARGET)
	./$(TARGET)

main.o: main.cpp ProductionWorker.h ShiftSupervisor.h TeamLeader.h Employee.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Employee.o: Employee.cpp Employee.h
	$(CXX) $(CXXFLAGS) -c Employee.cpp

ProductionWorker.o: ProductionWorker.cpp ProductionWorker.h Employee.h
	$(CXX) $(CXXFLAGS) -c ProductionWorker.cpp

ShiftSupervisor.o: ShiftSupervisor.cpp ShiftSupervisor.h Employee.h
	$(CXX) $(CXXFLAGS) -c ShiftSupervisor.cpp

TeamLeader.o: TeamLeader.cpp TeamLeader.h ProductionWorker.h Employee.h
	$(CXX) $(CXXFLAGS) -c TeamLeader.cpp

clean:
	rm -f $(OBJS) $(TARGET)
