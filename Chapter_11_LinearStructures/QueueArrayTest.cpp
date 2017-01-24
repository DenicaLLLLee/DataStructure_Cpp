#include <iostream>
#include "Chapter_11_LinearStructures\HeaderFiles\Queues.h"

using namespace std;

int main() {
	Queues<int> intQueue;
	intQueue.push(10);
	intQueue.push(15);
	intQueue.push(12);
	intQueue.push(11);
	cout << "Popped element = " << intQueue.pop() << endl;
}