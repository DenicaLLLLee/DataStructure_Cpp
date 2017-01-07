/*
String Permutation
Oyashi
01/06/2017
*/

#include <iostream>
#include <string>
#include <HeaderFiles\recursiveparadigm.h>

using namespace std;

int main() {
	string inputWord;
	cout << "Please enter the word for permutations : "; cin >> inputWord;
	ListPermutations(inputWord);
}