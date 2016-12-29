/*
Implement a function Capitalize(str) that returns a string in which the initial
character is capitalized (if it is a letter) and all other letters are converted so that they
appear in lowercase form. Characters other than letters are not affected. For
example, Capitalize("BOOLEAN") and Capitalize("boolean") should each
return the string "Boolean".
Oyashi
12/27/2016
*/

#include <iostream>
#include "HeaderFiles\strutils.h"

using namespace std;

int main() {
	string inputWord;
	cout << "Enter your word in random case "; cin >> inputWord;
	cout << "After capitalizing " << Capitalize(inputWord) << endl;
}