/*
In Chapter 2, exercise 8, you were askd to write a function RemoveZeroElements
that eliminated any zero-valued elements from an integer array. That operation is
much easier in the context of a vector, because the Vector class makes it possible to
add and remove elements dynamically. Rewrite RemoveZeroElements so that the
function header looks like this:

void RemoveZeroElements(vector<int> & vec);

I have modified the program to remove any user given number
12/29/2016
*/

#include <iostream>
#include <random>
#include <time.h>
#include <algorithm>
#include "HeaderFiles\vectorutil.h"

#define MAX 10
#define MIN 0

using namespace std;

template <typename T>
void GetInput(T &inputElement);

int main() {
	double inputElement = 0.0;
	srand(time(NULL));

	vector<int> vec;

	for (int i = MIN; i < 10; i++) {
		vec.push_back(double(rand()) / double( MAX + 1));
	}
	
	std::cout << "Random number generation" << std::endl;
	DisplayVector(vec);

	GetInput(inputElement);

	RemoveSpecificElement(vec, inputElement);

}

template <typename T>
void GetInput(T &inputElement) {
	cout << "Please enter the element to be removed "; cin >> inputElement;
}