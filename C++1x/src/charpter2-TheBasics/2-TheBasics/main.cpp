
#include <iostream>
using namespace std;

bool accept() {
	cout << "Do you want to processed (y/n) ?\n";

	char answer = 0;
	cin >> answer;

	if (answer == 'y') return true;
	return false;
}

bool accept2() {
	cout << "Do you want to processed (y/n) ?\n";

	char answer = 0;
	cin >> answer;

	bool result = false;
	switch (answer) {
		case 'y':
		case 'Y':
		result = true;
		break;
		case 'n':
		case 'N':
		result = false;
		break;
		default:
		cout << "I'll take that for a no.\n";
		result = false;
		break;
	}
	return result;
}

bool accept3() {
	bool result = false;
	int tries = 1;
	while(tries < 4) {
		cout << "Do you want to processed (y/n) ?\n";

		char answer = 0;
		cin >> answer;

		switch (answer) {
			case 'y':
			case 'Y':
			result = true;
			return result;
			break;

			case 'n':
			case 'N':
			result = false;
			return result;
			break;

			default:
			cout << "Sorry, I don't understand that.\n";
			tries++;
			break;
		}
	}
	cout << "I'll take that for a no.\n";
	result = false;
	return result;
}

void pointer() {
	char v[6] = {'A', 'B', 'C', 'D', 'E', 'F'}; // array of 6 characters
	char*p = v; // pointer to character
	cout << v << "\n";
	cout << p << "\t" << *p << "\n";
	p = &v[3];
	cout << p << "\t" << *p << "\t"  << &v[3] << "\t" << v[3] << "\n";
	p = &v[0];
	cout << p << "\t" << *p << "\t"  << &v[3] << "\t" << v[3] << "\n";
	char x = *p;
	cout << x << "\t" << *p << "\t" << &x << "\t" << p << "\n";
}

void copyFct() {
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10];

	for(auto i=0; i<=10; ++i) {
		v2[i] = v1[i];
	}

	for (auto x : v2) { // for each x in v
		cout << x << " ";
	}
	cout << "\n";
}

void print() {
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	for (auto x : v) { // for each x in v
		cout << x << " ";
	}
	cout << "\n";

	for (auto x : {10, 21, 32, 43, 54, 65}) {
		cout << x << " ";
	}
	cout << "\n";
}

void increment() {
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	for (auto &x : v) { // x refer to an element
		++x;
	}

	for (auto x : v) { // for each x in v
	cout << x << " ";
	}
	cout << "\n";
}

void printNullptr() {
	// nullptr // the null pointer
	double* pd  = nullptr;
	// List<Record>* list  = nullptr;
	// int x  = nullptr;

	cout << pd << "\n";
}

int count_x(char* p, char x) {
	if (p==nullptr) return 0;
	int count = 0;
	for (; *p!=0; ++p) {
		if (*p == x) {
			++count;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	/* code */
	// cout << accept() << "\n";
	// cout << accept2() << "\n";
	cout << accept3() << "\n";

	pointer() ;
	copyFct();
	print();
	increment();

	char characters[3] =  {'1', '2', '3', };
	cout << count_x(characters, '1') << "\n";

	return 0;
}
