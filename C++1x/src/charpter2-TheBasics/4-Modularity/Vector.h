/*Vector.h*/

#ifndef VECTOR_H
#define VECTOR_H 1

namespace  Basic {
	class Vector {
	public:
		Vector(int size) ;
		~Vector();
		double& operator[](int i);
		const int size();
		double sqrtSum(int size);

	private:
		double* mElem;
		int mSize;
	};
}

#endif