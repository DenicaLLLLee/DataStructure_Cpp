/*
	Tower Of Hanoi
	Oyashi
	01/06/2017
*/

#include <iostream>
#include <HeaderFiles\recursiveparadigm.h>

using namespace std;

int main() {
	int inputNum;
	cout << "Starting Tower = A" << endl;
	cout << "Starting Tower = B" << endl;
	cout << "Starting Tower = C" << endl;
	cout << "Please enter the number of disks in A"; cin >> inputNum;
	MoveTower(inputNum, 'A', 'B', 'C');
}