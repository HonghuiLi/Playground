/*Structures.cpp*/

#include <iostream>
#include "Structures.h"

void vector_init(Vector& v, int size) {
	if (size <0) return;
	if (nullptr != v.elem) {
		delete v.elem;
	}
	v.elem = new double[size];
	v.size = size;
}

double read_and_sum(int size) {
	std::cout << "read and sum "<< size << " numbers: \n";
	Vector v;
	vector_init(v, size);
	for(int i=0; i<size; i++) {
		std::cin >> v.elem[i];
	}

	double sum = 0;
	for(int i=0; i<size; i++) {
		sum += v.elem[i];
	}
	return sum;
}