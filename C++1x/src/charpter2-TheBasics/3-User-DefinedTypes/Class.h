/*Class.h*/

#ifndef CLASS_H
#define CLASS_H 1

class VectorClass {
public:
	VectorClass(int size)
		:mElem{new double[size]}, mSize{size} {}; // constr uct a Vector

	~VectorClass() {
		delete mElem;
		// delete mElem[];
	};

	double& operator[](int i) {
		return mElem[i];
	}

	const int size() {
		return mSize;
	}

private:
	double* mElem;
	int mSize;
};

double readAndSum(int size);

#endif