SHELL = /bin/sh

all: main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := $(wildcard src/*.cpp)
SRCS := $(filter-out catch_amalgamated.cpp, $(SRCS))
TESTS := $(wildcard *.cpp)
TESTS := $(filter-out catch_amalgamated.cpp, $(TESTS))
TESTS := $(filter-out addition.cpp, $(TESTS))
HEADERS := $(wildcard *.h*)
HEADERS := $(filter-out catch_amalgamated.hpp, $(TESTS))

ASSIGNMENT := $(wildcard ../lib/assignmentOperators/*.cpp)
OPERATOR := $(wildcard ../lib/operators/*.cpp)
ARITHMETIC := $(wildcard ../lib/arithmetic/*.cpp)
CONSTRUCTOR := $(wildcard ../lib/*.cpp)

main: $(TESTS) ../src/fac.cpp ../src/fac.h $(HEADERS)
	$(CXX) $(CXXFLAGS) $(TESTS) ../src/fac.cpp catch_amalgamated.cpp $(ASSIGNMENT) $(OPERATOR) $(ARITHMETIC) $(CONSTRUCTOR) -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

catch_amalgamated: catch_amalgamated.cpp catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamated.cpp -o "$@"

clean:
	rm -f main main-debug