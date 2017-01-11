#include <iostream>
#include <vector>
#include <ctime>
#include <random>
#include <functional>
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

void InsertionSort(std::vector<int> & vec) {
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size() - 1; j++)
		{
			if (vec[j] > vec[j + 1]) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
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

int GetMedian(std::vector<int> & vec, int start, int finish) {
	int mid = (start + finish) / 2;
	std::vector<int> medianVec;
	medianVec.push_back(vec[start]);
	medianVec.push_back(vec[mid]);
	medianVec.push_back(vec[finish]);
	SelectionSort(medianVec);
	return medianVec[1];
}

int Partition(std::vector<int> & vec, int start, int finish) {
	//int pivot = vec[start];
	int pivot = GetMedian(vec, start, finish);
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

void fillUpVector(std::vector<int> & vec, int n) {
	srand(int(time(NULL)));
	for (int i = 0; i < n; i++) {
		vec.push_back(rand() % n);
	}
}

//double ElapsedTime(void (*func)(std::vector<int> & vec), std::vector<int> & vec) {
double ElapsedTime(std::function<void(std::vector<int> & vec)> sortFunction, std::vector<int> & vec) {
	double start = 0.0, finish = 0.0, elapsed = 0.0;
	if (vec.size() < 100) {
		for (int i = 0; i < 1000; i++) {
			start = double(clock()) / CLOCKS_PER_SEC;
			sortFunction(vec);
			finish = double(clock()) / CLOCKS_PER_SEC;
			elapsed += finish - start;
		}
		elapsed /= 1000;
	}
	else {
		start = double(clock()) / CLOCKS_PER_SEC;
		sortFunction(vec);
		finish = double(clock()) / CLOCKS_PER_SEC;
		elapsed = finish - start;
	}
	return elapsed;
}

double ElapsedTime(std::function<bool(std::vector<int> & vec, int key)> searchFunction, std::vector<int> & vec, int key) {
	double start = 0.0, finish = 0.0, elapsed = 0.0;
	for (int i = 0; i < 1000; i++) {
		start = double(clock()) / CLOCKS_PER_SEC;
		bool retVal = searchFunction(vec, key);
		finish = double(clock()) / CLOCKS_PER_SEC;
		elapsed += finish - start;
	}
	elapsed /= 1000;
	return elapsed;
}

bool LinearSearch(std::vector<int> & vec, int key) {
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		if (*itr == key) {
			return true;
		}
	}
	return false;
}

bool BinarySearch(std::vector<int> & vec, int key) {
	int retVal = BinarySearchRecurse(vec, key, vec[0], vec[vec.size() - 1]);
	if (retVal < 0) {
		return false;
	}
	else {
		return true;
	}
}

int BinarySearchRecurse(std::vector<int> & vec, int key, int low, int high) {
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if (key == mid) return mid;
	if (key < vec[mid]) {
		BinarySearchRecurse(vec, key, low, mid - 1);
	}
	else {
		BinarySearchRecurse(vec, key, mid + 1, high);
	}
}