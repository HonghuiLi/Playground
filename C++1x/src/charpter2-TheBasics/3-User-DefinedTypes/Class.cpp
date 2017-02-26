/*Class.cpp*/

#include <iostream>
#include "Class.h"

double readAndSum(int size) {
	std::cout << "read and sum "<< size << " numbers: \n";
	VectorClass v(size);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}

	double sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	return sum;
}
