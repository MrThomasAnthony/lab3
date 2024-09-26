#include <iostream>
#include "change.hpp"

using namespace std;

int payment;

extern int dollar;
extern int quarter;
extern int dime;

int changeDollars;
int changeQuarters;
int changeDimes;
int changePennies;

int main() {
	cout << "Please enter your purchase amount : ";
	cin >> payment;

	for (int i = 0; i < payment; i++) {
		
		if(payment % dollar == 0) {
			changeDollars++;
			payment -= dollar;
		}
		else if (payment % quarter == 0) {
			changeQuarters++;
			payment -= quarter;
		}
		else if(payment % dime == 0) {
			changeDimes++;
			payment -= dime;
		}
		else {
			changePennies++;
			payment--;
		}
		
	}

	cout << "Dollars : " << changeDollars
		<< "\nQuarters : " << changeQuarters
		<< "\nDimes : " << changeDimes
		<< "\nPennies : " << changePennies;

	return 0;
}