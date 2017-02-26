/*main.cpp*/

#include <iostream>
#include "Structures.h"
#include "Class.h"
#include "Enumeration.h"

using namespace std;

void structures() {
	Vector v;
	vector_init(v, 10);
	int i1 = v.size;
	Vector& v2 = v;
	int i2  = v2.size;
	Vector* p = &v;
	int i3  = p->size;
	cout << i1 << "\t" << i2 << "\t" << i3 << "\n";

	cout << read_and_sum(3) << "\n";
}

void classes() {
	VectorClass v(5);
	cout << readAndSum(3) << "\n";
}

void enumerations() {
	// Color x = Red; // error : which red?
	// Color y = TrafficLight::Red; // error : that red is not a Color
	Color z = Color::Red; // OK
	cout << (int)z << "\n";
	// we cannot implicitly mix Color and integer values
	// int i = Color::Red;
	// Color c = 2;
}

int main(int argc, char const *argv[]) {
	/* code */
	structures() ;
	classes();
	enumerations();

	return 0;
}

