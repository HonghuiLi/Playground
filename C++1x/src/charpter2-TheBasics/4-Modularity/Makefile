# CXX=gcc
# CXX=clang
CXX=g++
CXXFLAGS=-g -std=c++11 -Wall -pedantic
INCLUDE=
LIBRARIE=
CXXFLAGS+= -I$(INCLUDE) -L$(LIBRARIE)

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)
MAIN=$(wildcard *main*.cpp)
BIN=$(MAIN:%.cpp=%.app)

all:$(OBJ)
	$(CXX) $(CXXFlags) -o $(BIN) $^
%.o:%.c
	$(CXX) $(CXXFlags) $@ -c $<

clean:
	rm -rf *.o
	rm -rf $(BIN)

