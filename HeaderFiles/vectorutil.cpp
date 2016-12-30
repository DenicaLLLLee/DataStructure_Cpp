/*
	Implementation of vectorutil.h
	12/29/2016
	Oyashi
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include "vectorutil.h"

using namespace std;

void DisplayVector(vector<int> & vec) {
	std::vector<int>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}

void RemoveZeroElements(vector<int> & vec) {
	vec.erase(remove(vec.begin(), vec.end(), 0), vec.end());
	std::cout << "After Zero Removal" << std::endl;
	DisplayVector(vec);
}

void RemoveSpecificElement(vector<int> & vec, int element) {
	vec.erase(remove(vec.begin(), vec.end(), element), vec.end());
	std::cout << "After " << element << " Removal" << std::endl;
	DisplayVector(vec);
}
