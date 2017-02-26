/*Vector.cpp*/

#include <iostream>
#include <cmath>
#include <stdexcept>
#include "Vector.h"

using namespace Basic;

// Vector::Vector(int size)
// 	:mElem{new double[size]}, mSize{size} {
// 		if (size < 0) throw std::length_error{"negative size"};
// 		mElem = new double[size];
// 		mSize = size;
// }

Vector::Vector(int size) {
	if (size < 0) throw std::length_error{"negative size"};
	mElem = new double[size];
	mSize = size;
}

Vector::~Vector() {
	delete mElem;
	// delete mElem[];
}

double& Vector::operator[](int i) {
	// ‘‘the index must be in the [ 0 : size() ) range,’’
	if (i<0 || mSize<=i) throw std::out_of_range{"Vector::operator[]"};

	return mElem[i];
}

const int Vector::size() {
	return mSize;
}

double Vector::sqrtSum(int size) {
	std::cout << "read sqrt and sum "<< size << " numbers: \n";
	Vector v(size);
	for (int i = 0; i < v.size(); ++i) {
		std::cin >> v[i];
	}

	double sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += sqrt(v[i]);
	}
	return sum;
}