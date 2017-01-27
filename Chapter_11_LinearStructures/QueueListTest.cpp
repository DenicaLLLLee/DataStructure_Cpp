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
	intQueue.enqueue(9);
	intQueue.enqueue(4);
	intQueue.enqueue(3);
	intQueue.enqueue(2);
	intQueue.enqueue(1);
	intQueue.enqueue(8);
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "dequeue element = " << intQueue.dequeue() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "*********************************************" << endl;
	cout << "Trying to peek element " << intQueue.peek() << endl;
	cout << "*********************************************" << endl;
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "dequeue element = " << intQueue.dequeue() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "dequeue element = " << intQueue.dequeue() << endl;
	cout << "*********************************************" << endl;
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "*********************************************" << endl;
	cout << "Inserting element 6 with priority 2" << endl;
	intQueue.enqueue(6, 2);
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
	cout << "*********************************************" << endl;
	cout << "Inserting element 9 with priority 8" << endl;
	intQueue.enqueue(9, 8);
	intQueue.display();
	cout << "Size of Queue = " << intQueue.sizeOfQueue() << endl;
}