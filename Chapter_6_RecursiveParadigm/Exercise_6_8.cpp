/*
Using the ListPermutations example as a starting point, write a function
ListSubsets that generates all possible subsets of a given set, where the set is
represented by a string of letters. For example, if you call the function
ListSubsets("ABC");
	Oyashi
	01/07/2016
*/

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include "HeaderFiles\recursiveparadigm.h"

using namespace std;

int main() {
	string inputWord;
	cout << "Please enter string to print out all possible subsets : "; cin >> inputWord;
	ListSubsets(inputWord);
}