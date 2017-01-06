/*
The mathematical combinations function C(n, k) is usually defined in terms of
factorials, as follows:
C(n, k) = n!/k! x (n–k)!
The values of C(n, k) can also be arranged geometrically to form a triangle in which
n increases as you move down the triangle and k increases as you move from left to
right. The resulting structure,, which is called Pascal’s Triangle after the French
mathematician Blaise Pascal, is arranged like this:
				C(0, 0)
			C(1, 0) C(1, 1)
		C(2, 0) C(2, 1) C(2, 2)
	C(3, 0) C(3, 1) C(3, 2) C(3, 3)
C(4, 0) C(4, 1) C(4, 2) C(4, 3) C(4, 4)
Pascal’s Triangle has the interesting property that every entry is the sum of the two
entries above it, except along the left and right edges, where the values are always 1.
Consider, for example, the circled entry in the following display of Pascal’s
Triangle:

This entry, which corresponds to C(6, 2), is the sum of the two entries—5 and 10—
that appear above it to either side. Use this relationship between entries in Pascal’s
Triangle to write a recursive implementation of the Combinations function that uses
no loops, no multiplication, and no calls to Fact.
	Oyashi
	01/05/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int n, k;
	cout << "Please enter n and k for combination calculation : "; cin >> n >> k;
	cout << "The result = " << combination(n, k) << endl;
}