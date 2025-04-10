#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	here:
	cout << "Enter values for variables A, B and C: ";
	cin >> a >> b >> c;
	if (a > b && b > c || a < b && b < c) {
		a *= 2;
		b *= 2;
		c *= 2;
		cout << "Meaning of A: " << a << endl << "Meaning of B: " << b << endl << "Meaning of C: " << c << endl;
	}
	else {
		a *= -1;
		b *= -1;
		c *= -1;
		cout << "Meaning of A: " << a << endl << "Meaning of B: " << b << endl << "Meaning of C: " << c << endl;
	}
	cout << "This amazing programm stop" << endl;
	cout << "Damm i looking good" << endl;

	int sw;
	cout << "Choose interaction:\n\t1 - Repeat programm. \n\tAny other - End programm.";
	cin >> sw;
	switch (sw) {
	case(1):
		goto here;
	default:
		cout << "Programm gonna end now";
	}

}
