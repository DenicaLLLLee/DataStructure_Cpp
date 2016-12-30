#pragma once
/*
	Queue Utility header file
	Any queue related functions can
	be found here
	Oyashi
	12/30/2016
*/

#ifndef __queueutility_h__
#define __queueutility_h__
/*
Function: ReadIntoQueue
Usage: ReadIntoQueue(std::queue<T> & que);
------------------------------
This function reads the elements
from file into the queue.
*/
template <class T>
void ReadIntoQueue(std::ifstream & inputFile, std::queue<T> & que) {
	T word;
	while (inputFile >> word) {
		que.push(word);
	}
}
/*
Function: displayQueue
Usage: displayQueue(std::queue<T> & que);
------------------------------
This function displays the elements
from queue.
*/
template <class T>
void displayQueue(std::queue<T> & que) {
	while (!que.empty()) {
		cout << que.front() << endl;
		que.pop();
	}
}
/*
Function: ReverseQueue
Usage: ReverseQueue(std::queue<T> & que);
------------------------------
This function reverses the elements
in the given queue.
*/
template <class T>
void ReverseQueue(std::queue<T> & que) {
	std::stack<T> newStack;
	while (!que.empty()) {
		newStack.push(que.front());
		que.pop();
	}

	while (!newStack.empty()) {
		que.push(newStack.top());
		newStack.pop();
	}
}

#endif // !__queueutility_h__


