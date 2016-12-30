/*
Given that it is possible to insert new elements at any point, it is not difficult to keep
elements in order as you create a Vector. Using ReadTextFile as a starting point,
write a function
void SortTextFile(ifstream & infile, Vector<string> & lines);
that reads the lines from the file into the vector lines, but keeps the elements of the
vector sorted in lexicographic order instead of the order in which they appear in the
file. As you read each line, you need to go through the elements of the vector you
have already read, find out where this line belongs, and then insert it at that position.

	Oyashi
	12/20/2016
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "HeaderFiles\vectorutil.h"

using namespace std;

int main() {
	string fileName = "twinkle.txt";
	vector<string> fileLines;

	ifstream infile;
	infile.open(fileName, fstream::in);

	cout << "Reading file : " << fileName << endl;
	cout << endl;
	if (ReadIntoVector(infile, fileLines)) {
		DisplayVector(fileLines);
	}
	else {
		cout << "EOF" << endl;
	}

	SortTextFile(infile, fileLines);

	cout << "After Sorting" << endl;
	DisplayVector(fileLines);

	infile.close();
	fileLines.~vector();

}