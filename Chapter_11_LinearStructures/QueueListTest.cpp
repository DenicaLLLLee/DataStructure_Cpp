/*
	Implementation of Queue using Linked List
	Oyashi
	01/24/2017
*/

#include <iostream>
#include "Chapter_11_LinearStructures\HeaderFiles\QueueList.h"

using namespace std;

int main() {
	QueueList<int> intQueue;
	intQueue.push(9);
	intQueue.push(4);
	intQueue.push(3);
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "Popped element = " << intQueue.pop() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "Popped element = " << intQueue.pop() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "Popped element = " << intQueue.pop() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
}