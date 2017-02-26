// main.cpp
#include <iostream>
#include <stdexcept>      // std::out_of_range

#include "Vector.h"

using namespace std;

void modularity() {
	Basic::Vector v(3);
	cout << v.sqrtSum(3) << "\n";
 }

// Exceptions report errors found at run time.
void exceptionFun(Basic::Vector& v) {
	try { // exceptions here are handled by the handler defined below
		v[v.size()] = 7; // tr y to access beyond the end of v
	} catch (const std::out_of_range& oor) { // oops: out_of_range error
		// ... handle range error ...
		std::cerr << "Out of Range error: " << oor.what() << '\n' ;
	}

	try {
		Basic::Vector v1(-27);
	} catch (const std::length_error& oor) {
		// handle negative size
		std::cerr << "Length error: " << oor.what() << '\n' ;
	} catch (const std::bad_alloc& oor) {
		// handle memory exhaustion
		std::cerr << "bad alloc error: " << oor.what() << '\n' ;
	}
}

 // Static Assertions: we can also perform simple checks on other properties
 // that are known at compile time and report failures as compiler error messages.
void assertions() {
	static_assert(4 <= sizeof(int), "integers are too small"); // check integer size
	// In general, static_assert(A,S) prints S as a compiler error message if A is not true .

	constexpr double C = 299792.458; // km/s
	const double local_max = 160.0 / (60*60); // 160 km/h == 160.0/(60*60) km/s

	const double speed  = 12.34;
	// double speed  = 12.34;
	static_assert(speed < C, "can't go that fast"); // error : speed must be a constant
	static_assert(local_max < C, "can't go that fast"); // OK
	// static_assert(local_max > C, "can't go that fast"); // assert failed
}

int main(int argc, char const *argv[]) {
	/* code */
	modularity();

	Basic::Vector v(3);
	exceptionFun(v);

	assertions();

	return 0;
}
