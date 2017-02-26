/*Structures.h*/

#ifndef STRUCTURES_H
#define STRUCTURES_H 1

struct Vector {
	int size = 0; // number of elements
	double* elem = nullptr; // pointer to elements
};

void vector_init(Vector& v, int s);

// read s integers from cin and return their sum; s is assumed to be positive
double read_and_sum(int size);

#endif