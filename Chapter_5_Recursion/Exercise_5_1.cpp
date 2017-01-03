/*
Spherical objects, such as cannonballs, can be stacked to form a pyramid with one
cannonball at the top, sitting on top of a square composed of four cannonballs, sitting
on top of a square composed of nine cannonballs, and so forth. Write a recursive
function Cannonball that takes as its argument the height of the pyramid and returns
the number of cannonballs it contains. Your function must operate recursively and
must not use any iterative constructs, such as while or for.
	Oyashi
	01/03/2017
*/

#include <iostream>
#include "HeaderFiles\recursion.h"

using namespace std;

int main() {
	int height;
	cout << "Please enter the height : "; cin >> height;
	cout << "Total number of balls required = " << cannonBall(height) << endl;

}