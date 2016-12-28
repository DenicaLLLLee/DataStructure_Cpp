/*
One of the simplest types of codes used to make it harder for someone to read a
message is a letter-substitution cipher, in which each letter in the original message
is replaced by some different letter in the coded version of that message. A
particularly simple type of letter-substitution cipher is a cyclic cipher, in which each
letter is replaced by its counterpart a fixed distance ahead in the alphabet. The word
cyclic refers to the fact that if the operation of moving ahead in the alphabet would
take you past Z, you simply circle back to the beginning and start over again with A.
Using the string functions provided by the string interface, implement a function
EncodeString with the prototype
string EncodeString(string str, int key);
The function returns the new string formed by shifting every letter in str forward
the number of letters indicated by key, cycling back to the beginning of the alphabet
if necessary. For example, if key has the value 4, the letter A becomes E, B becomes
F, and so on up to Z, which becomes D because the coding cycles back to the
beginning. If key is negative, letter
Oyashi
12/27/2016
*/

#include <iostream>
#include "strutils.h"

using namespace std;

int main() {
	string inputWord;
	int key;
	cout << "This program encodes messages using a cyclic cipher\n";
	cout << "To stop, enter 0 as key\n";
	while (true) {
		cout << "Please enter the key "; cin >> key;
		if (key == 0) break;
		else {
			cout << "Enter a message : "; cin >> inputWord;
			cout << "Encoded message : " << EncodeString(inputWord, key) << endl;;
		}
	}
}