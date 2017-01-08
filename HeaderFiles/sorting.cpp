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