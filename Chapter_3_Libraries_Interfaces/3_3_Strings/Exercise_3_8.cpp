/*
Without using the string method substr, implement your own function
SubString(s, pos, len), which returns the substring of s, beginning at position
pos and including at most len characters. Make sure that your function correctly
applies the following rules:
a. If pos is negative, it is set to 0 so that it indicates the first character in the string.
b. If len is greater than s.length()– pos, it is set to strlen(s) – pos so that it
stops at last character.
c. If pos is greater than s.length() - 1, SubString returns the empty string.
*/

#include <iostream>
#include "strutils.h"

using namespace std;

int main() {
	cout << "This program returns the substring as substr does" << endl;
	string inputWord = "";
	int pos = 0, len = 0;
	cout << "Enter the word "; cin >> inputWord;
	cout << "Enter the position to start splitting "; cin >> pos;
	cout << "Enter the length of substring "; cin >> len;
	cout << "SubString = " << SubString(inputWord, pos, len) << endl;
}