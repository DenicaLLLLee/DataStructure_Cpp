/*
Write a program wc.cpp that reads a file and reports how many lines, words, and
characters appear in it. For the purposes of this program, a word consists of a
consecutive sequence of any characters except whitespace characters. For example,
if the file twinkle.txt contains the following verse from Alice in Wonderland,
Oyashi
12/28/2016
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	char ch;
	string filename = "twinkle.txt";
	int charCounter = 0, wordCounter = 0, lineCounter = 0;
	ifstream inputFile;
	
	inputFile.open(filename);
	if (inputFile.fail()) {
		cout << "File could not be opened" << endl;
		exit(1);
	}

	while ((ch = inputFile.get()) != EOF) {
		charCounter++;

		if (ch == ' ' || ch == '\n')
			wordCounter++;

		if (ch == '\n')
			lineCounter++;
	}

	cout << "File: " << filename << endl;
	cout << "Lines: " << lineCounter << endl;
	cout << "Words: " << wordCounter << endl;
	cout << "Characters: " << charCounter << endl;

}