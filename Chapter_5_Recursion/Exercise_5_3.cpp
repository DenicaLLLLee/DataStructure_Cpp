/*
The greatest common divisor (g.c.d.) of two nonnegative integers is the largest
integer that divides evenly into both. In the third century B.C., the Greek
mathematician Euclid discovered that the greatest common divisor of x and y can
always be computed as follows:
• If x is evenly divisible by y, then y is the greatest common divisor.
• Otherwise, the greatest common divisor of x and y is always equal to the greatest
common divisor of y and the remainder of x divided by y.
Use Euclid’s insight to write a recursive function GCD(x, y) that computes the
greatest common divisor of x and y.
	Oyashi
	01/04/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int x = 0, y = 0;
	cout << "Please enter x and y to find greatest common divisor ";
	cin >> x >> y;
	if (x > y) {
		cout << "GCD = " << GCD(x, y) << endl;
	}
	else {
		cout << "GCD = " << GCD(y, x) << endl;
	}
}