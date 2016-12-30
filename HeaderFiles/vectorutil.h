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
//bool ReadVector(ifstream & infile, vector<int> & vec);
#endif // !__vectorutil_h__

