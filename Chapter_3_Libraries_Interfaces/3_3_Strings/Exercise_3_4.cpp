/*
Implement a function EqualIgnoringCase(str1, str2) that returns true if the
two string parameters contain the same sequence of characters ignoring case
distinctions. Implement this once using the convenience functions from strutils.h
and again without.
Oyashi
12/27/2016
*/

#include <iostream>
#include "strutils.h"

using namespace std;

bool EqualIgnoringCase(string str1, string str2);

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

bool EqualIgnoringCase(string str1, string str2) {
	if (str1.length() == str2.length() && str1.compare(str2) == 0) { return true; }
	else { return false; }
}