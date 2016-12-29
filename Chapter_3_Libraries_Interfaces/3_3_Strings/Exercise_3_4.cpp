/*
Implement a function EqualIgnoringCase(str1, str2) that returns true if the
two string parameters contain the same sequence of characters ignoring case
distinctions. Implement this once using the convenience functions from strutils.h
and again without.
Oyashi
12/27/2016
*/

#include <iostream>
#include "HeaderFiles\strutils.h"

using namespace std;

int main() {
	string strFirst, strSecond;
	cout << "Enter first string "; cin >> strFirst;
	cout << "Enter second string "; cin >> strSecond;

	strFirst = ConvertToLowerCase(strFirst);
	strSecond = ConvertToLowerCase(strSecond);

	if (EqualIgnoringCase(strFirst, strSecond)) {
		cout << "Both strings are equal\n";
	}
	else {
		cout << "Strings are not equal\n";
	}
}