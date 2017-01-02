/*
This program implements recursion
paradigm by showing its usage in
checking whether the given word is
palindrome or not.
Oyashi
01/02/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	string input;
	cout << "Please enter a word : "; 
	getline(cin, input);
	if (PalindromeCheck(input)) {
		cout << "The given word is palindrome" << endl;
	}
	else {
		cout << "The given word is not palindrome" << endl;
	}
}