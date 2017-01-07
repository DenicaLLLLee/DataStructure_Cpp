/*
Following the logic of the MoveTower function, write a recursive function
NHanoiMoves(n) that calculates the number of individual moves required to solve
the Tower of Hanoi puzzle for n disks.
	Oyashi
	01/06/2017
*/

#include <iostream>
#include "HeaderFiles\recursiveparadigm.h"

using namespace std;

int main() {
	int disks;
	cout << "Please enter the number of disks to move : "; cin >> disks;
	cout << "Total number of moves = " << NHanoiMoves(disks) << endl;
}