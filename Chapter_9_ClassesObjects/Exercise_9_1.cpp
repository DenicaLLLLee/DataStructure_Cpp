/*
Reimplement the CharStack class using a Vector<char> instead of an array for its
internal storage.

	Oyashi
	01/12/2016
*/

#include <iostream>
#include <vector>
#include "Chapter_9_ClassesObjects\HeaderFiles\VectorCharStack.h"

using namespace std;

int main() {
	VectorCharStack vec;
	vec.push('O');
	vec.push('Y');
	vec.push('E');

	cout << vec.pop() << endl;
	cout << vec.peek() << endl;
	cout << vec.size() << endl;
	vec.clear();
}
