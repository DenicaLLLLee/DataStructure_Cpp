/*
A palindrome is a word that reads identically backward and forward, such as level
or noon. Write a predicate function IsPalindrome(str) that returns true if the
string str is a palindrome. In addition, design and write a test program that calls
IsPalindrome to demonstrate that it works.
12/27/2016
Oyashi
*/

#include <iostream>
#include "HeaderFiles\strutils.h"

using namespace std;

int main() {
	string inputWord;
	cout << "Enter the word "; cin >> inputWord;
	if (IsPalindrome(inputWord)) {
		cout << "Given word is palindrome" << endl;
	}
	else {
		cout << "Given word is not palindrome" << endl;
	}
}