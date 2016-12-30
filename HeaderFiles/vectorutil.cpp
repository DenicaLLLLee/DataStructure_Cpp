/*
	Implementation of vectorutil.h
	12/29/2016
	Oyashi
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "HeaderFiles\strutils.h"
#include "vectorutil.h"

using namespace std;

/*
Function: RemoveZeroElements
Usage: RemoveZeroElements(vec);
------------------------------
This function removes ZERO elements
from the given vector.
*/
void RemoveZeroElements(std::vector<int> & vec) {
	vec.erase(remove(vec.begin(), vec.end(), 0), vec.end());
	std::cout << "After Zero Removal" << std::endl;
	DisplayVector(vec);
}
/*
Function: RemoveSpecificElement
Usage: RemoveSpecificElement(vec);
------------------------------
This function removes any user given
elements from the given vector.
*/
void RemoveSpecificElement(std::vector<int> & vec, int element) {
	vec.erase(remove(vec.begin(), vec.end(), element), vec.end());
	std::cout << "After " << element << " Removal" << std::endl;
	DisplayVector(vec);
}
/*
Function: DisplayVector
Usage: DisplayVector(vec);
------------------------------
This function displays the elements
from the given vector.
*/
void DisplayVector(std::vector<int> & vec) {
	std::vector<int>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}

bool ReadVector(ifstream & infile, vector<int> & vec) {
	string line = "";
	vec.clear();
	while (infile.good())
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
				vec.push_back(StringToInteger(line));
			}
			else
				return true;
		}
	}
	return false;
}