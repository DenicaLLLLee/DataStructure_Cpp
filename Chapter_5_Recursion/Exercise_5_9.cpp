/*
Write a recursive function that takes a string as argument and returns the reverse of
that string. The prototype for this function should be
string Reverse(string str);
and the statement
cout << Reverse("program") << endl;
should display
margorp
Your solution should be entirely recursive and should not use any iterative constructs
such as while or for.
	Oyashi
	01/05/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	string inputWord;
	cout << "Please enter the input word : "; getline(cin, inputWord);
	cout << "The reverse of " << inputWord << " is " << Reverse(inputWord) << endl;
}