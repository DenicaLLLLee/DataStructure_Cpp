/*
	Implementation of Insertion Sort
	Oyashi
	01/08/2017
*/

#include <iostream>
#include <vector>
#include "HeaderFiles\sorting.h"

using namespace std;

int main() {
	int *arr = new int[8]{ 12,43,76,9,65,23,11,87 };
	int size = 8;
	cout << "Before sorting" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
	std::cout << endl;
	InsertionSort(arr, size);
	std::cout << endl;
	std::cout << "After sorting" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << endl;
}