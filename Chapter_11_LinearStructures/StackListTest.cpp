/*
	Implementation of Efficient Generic Stack 
	Using Linked List
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
	intStack.display();
	cout << "Size of Stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "*********************************************" << endl;
	intStack.display();
	cout << "Size of Stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "*********************************************" << endl;
	intStack.display();
	cout << "Size of Stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "*********************************************" << endl;
	intStack.display();
	cout << "Size of Stack = " << intStack.sizeOfStack() << endl;
	cout << "Again pushing elements" << endl;
	intStack.push(7);
	intStack.push(2);
	intStack.push(4);
	intStack.push(3);
	intStack.push(7);
	intStack.push(8);
	intStack.display();
	cout << "Size of Stack = " << intStack.sizeOfStack() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
	cout << "*********************************************" << endl;
	intStack.display();
	cout << "Top element = " << intStack.peek() << endl;
}