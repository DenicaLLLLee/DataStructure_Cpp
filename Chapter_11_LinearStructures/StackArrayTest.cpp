
#include <iostream>
#include "Chapter_11_LinearStructures\HeaderFiles\Stack.h"

using namespace std;

int main() {
	Stack<int> intStack;
	intStack.push(5);
	intStack.push(3);
	intStack.push(1);
	intStack.push(5);
	intStack.push(3);
	intStack.push(1);
	intStack.push(5);
	intStack.push(3);
	intStack.push(1);
	intStack.push(8);
	intStack.push(9);
	intStack.push(2);

	cout << "Peek element = " << intStack.peek() << endl;
	cout << "Popped element = " << intStack.pop() << endl;
}