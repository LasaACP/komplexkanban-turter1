SHELL = /bin/sh

all:main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

ASSIGNMENT := $(wildcard ../lib/assignmentOperators/ComplexDivisionAssignment.cpp)
OPERATOR := $(wildcard ../lib/operators/*.cpp)
CONSTRUCTOR := $(wildcard ../lib/*.cpp)

HEADERS := $(wildcard *.h*)

main: 
	$(CXX) $(CXXFLAGS) complasa_runner.cpp $(ASSIGNMENT) $(OPERATOR) $(CONSTRUCTOR) fac.cpp 

clean:
	rm -f main main-debug


