#pragma once
/*
Header and inline implementation
of generic queues using linked list
Oyashi
01/24/2017
*/
#pragma once
#ifndef __queuelist_h__
#define __queuelist_h__
#include "genlib.h"
template <class T>
struct Node {
	T data;
	Node<T>* next;

	Node() :data(), next(NULL) {}
	Node(T d) :data(d), next(NULL) {}
};

template <class T>
class QueueList {
private:
	Node<T>* head;
	int size;

public:
	QueueList();
	~QueueList();
	int sizeOfQueue();
	bool isEmpty();
	void clear();
	void push(T value);
	T pop();
	void display();
};


#endif // !__Queuelist_h__

template<class T>
inline QueueList<T>::QueueList()
{
	head = NULL;
	size = 0;
}

template<class T>
inline QueueList<T>::~QueueList()
{
	if (head != NULL) {
		Node<T> *curr = head;
		while (curr != NULL) {
			Node<T>* temp = curr->next;
			delete curr;
			curr = temp;
		}
		head = NULL;
	}
}

template<class T>
inline int QueueList<T>::sizeOfQueue()
{
	return size;
}

template<class T>
inline bool QueueList<T>::isEmpty()
{
	return size == 0;
}

template<class T>
inline void QueueList<T>::clear()
{
	if (head != NULL) {
		Node<T> *curr = head;
		while (curr != NULL) {
			Node<T>* temp = curr->next;
			delete curr;
			curr = temp;
		}
		head = NULL;
	}
	size = 0;
}

template<class T>
inline void QueueList<T>::push(T value)
{
	Node<T> *newNode = new Node<T>(value);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node<T>* curr = head;
		while (curr != NULL) {
			if (curr->next == NULL) {
				curr->next = newNode;
				break;
			}
			curr = curr->next;
		}
	}
	size++;
}

template<class T>
inline T QueueList<T>::pop()
{
	if (head == NULL || size == 0) {
		Error("Queue is empty");
		return NULL;
	}
	else {
		T temp;
		temp = head->data;
		Node<T> *tempNode = head->next;
		delete head;
		head = tempNode;
		size--;
		return temp;
	}
}

template<class T>
inline void QueueList<T>::display()
{
	Node<T> *curr = head;
	while (curr) {
		std::cout << curr->data;
		if (curr->next != NULL) {
			std::cout << "->";
		}
		curr = curr->next;
	}
	std::cout << endl;
}
