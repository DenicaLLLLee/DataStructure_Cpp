/*
Write a C++ program that checks whether the bracketing operators (parentheses,
brackets, and curly braces) in a string are properly matched. As an example of
proper matching, consider the string
{ s = 2 * (a[2] + 3); x = (1 + (2)); }
If you go through the string carefully, you discover that all the bracketing operators
are correctly nested, with each open parenthesis matched by a close parenthesis, each
open bracket matched by a close bracket, and so on. On the other hand, the
following strings are all unbalanced for the reasons indicated:
(([]) The line is missing a close parenthesis.
)( The close parenthesis comes before the open parenthesis.
{(}) The bracketing operators are improperly nested.
	Oyashi
	12/20/2016
*/

#include <iostream>
#include <stack>
#include <algorithm>
#include "HeaderFiles\stackutility.h"

using namespace std;

int main() {
	string givenString = "{ s = 2 * (a[2 + 3); x = (1 + (2)); }";
	if (bracketCheck(givenString)) {
		cout << "Brackets are properly matched" << endl;
	}
	else {
		cout << "Brackets are not matching" << endl;
	}
}