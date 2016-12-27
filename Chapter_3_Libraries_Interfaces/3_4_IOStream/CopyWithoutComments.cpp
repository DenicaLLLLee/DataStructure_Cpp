/*
	This file copies contents of 
	one file to another without
	copying the comment section
	Oyashi
	12/27/2016
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void copyOnlyCode(ifstream &infile, ofstream &outfile);
void copyFile(ifstream &infile, ofstream &outfile);

int main() {
	ifstream inputFile;
	ofstream outputFile;

	string infileName = "input_test.txt";
	string outfileName = "output_test.txt";

	inputFile.open(infileName.c_str(), ifstream::in);
	outputFile.open(outfileName.c_str(), ifstream::out);

	if (inputFile.fail()) {
		cout << "Could not open input file" << endl;
		inputFile.clear();
		return 0;
	}
	if (outputFile.fail()) {
		cout << "Could not open output file" << endl;
		outputFile.clear();
		return 0;
	}
	cout << "Starting to copy file ...." << endl;
	copyOnlyCode(inputFile, outputFile);
	cout << "File copied successfully" << endl;

	inputFile.close();
	outputFile.close();
}

void copyFile(ifstream &infile, ofstream &outfile) {
	int ch;
	while ((ch = infile.get()) != EOF) {
		outfile.put(ch);
	}
}

void copyOnlyCode(ifstream &infile, ofstream &outfile) {
	int ch, nextCh;
	bool commentFlag = false;

	while ((ch = infile.get()) != EOF) {
		if (commentFlag) {
			if (ch == '*') {
				nextCh = infile.get();
				if (nextCh == '/') {
					commentFlag = false;
				}
				else {
					infile.unget();
				}
			}
		}
		else {
			if (ch == '/') {
				nextCh = infile.get();
				if (nextCh == '*') {
					commentFlag = true;
				}
				else {
					infile.unget();
				}
			}
			if (!commentFlag) outfile.put(ch);
		}
	}
}