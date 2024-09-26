#include <iostream>
using namespace std;

int main() {
	
	typedef int* VEC;
	typedef VEC* MATRIX;

	int a = 5;
	VEC v = &a;
	MATRIX m = &v;

	cout << "The value of a from v is: " << *v;
	cout << "\nThe value of a from m is: " << **m;

	return 0;
}