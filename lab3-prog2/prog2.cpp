#include <iostream>
using namespace std;

double x, y;

int main() {
	cout << "Enter X : ";
	cin >> x;

	cout << "Enter Y : ";
	cin >> y;

	double *xPointer = &x;
	double *yPointer = &y;

	double xAndYSum = *xPointer + *yPointer;

	cout << "X is : " << x;
	cout << "\nY is : " << y;

	cout << "\nSum of x and y : " << xAndYSum;

	return 0;
}