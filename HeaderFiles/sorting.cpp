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