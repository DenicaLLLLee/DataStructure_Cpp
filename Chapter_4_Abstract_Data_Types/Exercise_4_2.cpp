/*
Write a function
bool ReadVector(ifstream & infile, Vector<double> & vec);
that reads lines from the data file specified by infile, each of which consists of a
floating-point number, and adds them to the vector vec. The end of the vector is
indicated by a blank line or the end of the file. The function should return true if it
successfully reads the vector of numbers; if it encounters the end of the data file
before it reads any values, the function should return false.
In addition, suppose
that you have declares the variable roots as follows:
Vector<double> roots;
The first call to ReadVector(infile, roots) should return true after initializing
roots so that it contains the four elements shown at the beginning of the file. The
second call would also return true and change the value of roots to contain the
eight elements shown at the bottom of the file. Calling ReadVector a third time
would return false.
	
	Oyashi
	12/29/2016
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "HeaderFiles\strutils.h"
//#include "HeaderFiles\vectorutil.h"

using namespace std;

bool ReadVector(ifstream & infile, vector<double> & vec);
void DisplayVector(vector<double> & vec);

int main() {
	ifstream inputfile;
	vector<double> roots;

	inputfile.open("SquareAndCubeRoots.txt", fstream::in);
	if (inputfile.fail()) cout << "File could not be opened" << endl;

	if (ReadVector(inputfile, roots))
		DisplayVector(roots);
	else
		cout << "EOF" << endl;
	
	if (ReadVector(inputfile, roots))
		DisplayVector(roots);
	else
		cout << "EOF" << endl;

	if (ReadVector(inputfile, roots))
		DisplayVector(roots);
	else
		cout << "EOF" << endl;

	inputfile.close();
}

bool ReadVector(ifstream & infile, vector<double> & vec) {
	string line = "";
	vec.clear();
	while(infile.good())
	{
		streampos prevPos = infile.tellg();
		getline(infile, line);
		if (line == "") {
			return true;
		}
		else {
			getline(infile, line);
			if (!infile.eof()) {
				infile.seekg(prevPos);
				getline(infile, line);
				vec.push_back(StringToReal(line));
			}
			else
				return true;
		}
	}
	return false;
}

void DisplayVector(vector<double> & vec) {
	std::vector<double>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}