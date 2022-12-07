SHELL = /bin/sh

all:main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

ASSIGNMENT := $(wildcard ../lib/assignmentOperators/*.cpp)
OPERATOR := $(wildcard ../lib/operators/*.cpp)
ARITHMETIC := $(wildcard ../lib/arithmetic/*.cpp)
CONSTRUCTOR := $(wildcard ../lib/*.cpp)

HEADERS := $(wildcard *.h*)

main: 
	$(CXX) $(CXXFLAGS) complasa_runner.cpp $(ASSIGNMENT) $(OPERATOR) $(ARITHMETIC) $(CONSTRUCTOR) fac.cpp 

clean:
	rm -f main main-debug
