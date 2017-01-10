#include <iostream>
#include <vector>
#include "HeaderFiles\sorting.h"

void SelectionSort(std::vector<int> & vec) {
	int n = vec.size();
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++)
		{
			if (vec[i] > vec[j]) {
				int temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}
}

/*
	Merge Sort
*/
void MergeSort(std::vector<int> &vec) {
	int n = vec.size();
	if (n <= 1) return;
	std::vector<int> vec1;
	std::vector<int> vec2;
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			vec1.push_back(vec[i]);
		}
		else
		{
			vec2.push_back(vec[i]);
		}
	}
	MergeSort(vec1);
	MergeSort(vec2);
	vec.clear();
	Merge(vec, vec1, vec2);
}

void Merge(std::vector<int> & vec, std::vector<int> & v1, std::vector<int> & v2) {
	int n1 = v1.size();
	int n2 = v2.size();
	int p1 = 0;
	int p2 = 0;
	while (p1 < n1 && p2 < n2) {
		if (v1[p1] < v2[p2]) {
			vec.push_back(v1[p1++]);
		}
		else {
			vec.push_back(v2[p2++]);
		}
	}
	while (p1 < n1) vec.push_back(v1[p1++]);
	while (p2 < n2) vec.push_back(v2[p2++]);
}

void QuickSort(std::vector<int> & vec) {
	QuickSort(vec, 0, vec.size() - 1);
}

void QuickSort(std::vector<int> & vec, int start, int finish) {
	if (start >= finish)return;
	int boundary = Partition(vec, start, finish);
	QuickSort(vec, start, boundary - 1);
	QuickSort(vec, boundary + 1, finish);
}

int Partition(std::vector<int> & vec, int start, int finish) {
	int pivot = vec[start];
	int lh = start + 1;
	int rh = finish;
	while (true) {
		while (lh < rh && vec[rh] > pivot) rh--;
		while (rh > lh && vec[lh] < pivot) lh++;
		if (lh == rh)break;
		int temp = vec[lh];
		vec[lh] = vec[rh];
		vec[rh] = temp;
	}
	if (vec[lh] >= pivot) return start;
	vec[start] = vec[lh];
	vec[lh] = pivot;
	return lh;
}

long RaiseToPower(int x, int n) {
	if (n == 0) return 1;
	long temp = RaiseToPower(x, n / 2);
	if (n % 2 == 0) {
		return temp * temp;
	}
	else {
		return x * temp * temp;
	}
}

void InsertionSort(int *(&arr), int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}