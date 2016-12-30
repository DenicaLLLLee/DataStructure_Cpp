/*
	Vector Utility
	This file contains all the
	functions related with vector data type
	Oyashi
	12/29/2016
*/
#pragma once
#ifndef __vectorutil_h__
#define __vectorutil_h__
/*
 Function: RemoveZeroElements
 Usage: RemoveZeroElements(vec);
 ------------------------------
 This function removes ZERO elements
 from the given vector.
*/
/*
Note: Uncomment following line to use this header
file for int type and comment the generic form
function. Then you can use vectorutil.cpp easily.
*/
//RemoveZeroElements(std::vector<int> & vec);
template <class T>
void RemoveZeroElements(std::vector<T> & vec) {
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
/*
Note: Uncomment following line to use this header
file for int type and comment the generic form
function. Then you can use vectorutil.cpp easily.
*/
//void RemoveSpecificElement(std::vector<int> & vec, int element);
template <class T, class Type>
void RemoveSpecificElement(std::vector<T> & vec, Type element) {
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
/*
Note: Uncomment following line to use this header
file for int type and comment the generic form
function. Then you can use vectorutil.cpp easily.
*/
//void DisplayVector(std::vector<int> & vec);
template <class T>
void DisplayVector(std::vector<T> & vec) {
	std::vector<T>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}
/*
Function: ReadVector
Usage: ReadVector(inputFile, vec);
------------------------------
This function return true if it 
successfully reads the vector of numbers.
*/
/*
Note: Uncomment following line to use this header
file for int type and comment the generic form
function. Then you can use vectorutil.cpp easily.
*/
//bool ReadVector(ifstream & infile, vector<int> & vec);
template <class T>
bool ReadVector(ifstream & infile, vector<T> & vec) {
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
				vec.push_back(StringToReal(line));
			}
			else
				return true;
		}
	}
	return false;
}
#endif // !__vectorutil_h__

