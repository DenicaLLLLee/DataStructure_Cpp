/*
The strutils.h library contains a function IntegerToString,. You might have
wondered how the computer actually goes about the process of converting an integer
into its string representation. As it turns out, the easiest way to implement this
function is to use the recursive decomposition of an integer outlined in exercise 6.
Rewrite the IntegerToString implementation so that it operates recursively without
using use any of the iterative constructs such as while and for.

	Oyashi
	01/06/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int inputNum;
	string outputNum;
	cout << "Please enter any integer : "; cin >> inputNum;
	cout << "The string form of the intger : " << itos(inputNum) << endl;

}