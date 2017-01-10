#pragma once
#ifndef __sorting_h__
#define __sorting_h__
void SelectionSort(std::vector<int> & vec);
void InsertionSort(std::vector<int> & vec);
void InsertionSort(int *(&arr), int size);
void MergeSort(std::vector<int> & vec);
void Merge(std::vector<int> & vec, std::vector<int> & v1, std::vector<int> & v2);
void QuickSort(std::vector<int> & vec);
void QuickSort(std::vector<int> & vec, int start, int finish);
int Partition(std::vector<int> & vec, int start, int finish);
long RaiseToPower(int x, int n);
void fillUpVector(std::vector<int> & vec, int n);
//double ElapsedTime(void (*func)(std::vector<int> & vec), std::vector<int> & vec);
double ElapsedTime(std::function<void(std::vector<int> & vec)> sortFunction, std::vector<int> & vec);
#endif // !__sorting_h__


