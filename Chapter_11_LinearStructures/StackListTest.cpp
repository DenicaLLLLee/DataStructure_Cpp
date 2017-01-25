/*
	Implementation of Stack using Linked List
	Oyashi
	01/24/2017
*/

#include <iostream>
#include "Chapter_11_LinearStructures\HeaderFiles\StackList.h"

using namespace std;

int main() {
	StackList<int> intStack;
	intStack.push(9);
	intStack.push(4);
	intStack.push(3);
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "Size of stack = " << intStack.sizeOfStack() << endl;
}