#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include "lambda.h"

using namespace std;

int lambda(int argc, char const *argv[])
{
	/* code */
	int x = 5;
	std::vector<int> v  {1, 2, 3, 4, 5, 6, 7};
	v.erase(std::remove_if(v.begin(), v.end(), [x](int n) { return n<x; }), v.end());

	std::cout << "vector v: ";
	for (auto i: v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	std::function<int (int)> func = [](int i) { return i+4; };
	std::cout << "func: " << func(6) << "\n";

	return 0;
}
