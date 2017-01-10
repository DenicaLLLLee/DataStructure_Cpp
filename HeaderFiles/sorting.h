#pragma once
#ifndef __sorting_h__
#define __sorting_h__
void SelectionSort(std::vector<int> & vec);
void MergeSort(std::vector<int> & vec);
void Merge(std::vector<int> & vec, std::vector<int> & v1, std::vector<int> & v2);
void QuickSort(std::vector<int> & vec);
void QuickSort(std::vector<int> & vec, int start, int finish);
int Partition(std::vector<int> & vec, int start, int finish);
long RaiseToPower(int x, int n);
void InsertionSort(int *(&arr), int size);
#endif // !__sorting_h__


