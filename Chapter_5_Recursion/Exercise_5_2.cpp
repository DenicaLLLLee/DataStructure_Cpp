/*
Unlike many programming languages, C++ does not include a predefined operator
that raises a number to a power. As a partial remedy for this deficiency, write a
recursive implementation of a function
int RaiseIntToPower(int n, int k)
that calculates nk. The recursive insight that you need to solve this problem is the
mathematical property that
nk =
!" " # " "
$ 1
n x nk–1
if k = 0
otherwise
	Oyashi
	01/04/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int num = 0, pow = 0;
	cout << "Please enter the number and its power ";
	cin >> num >> pow;
	cout << num << " ^ " << pow << " = " << RaiseIntToPower(num, pow) << endl;
}