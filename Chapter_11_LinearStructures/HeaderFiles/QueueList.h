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
	Node<T> *head, *tail;
	int size;

public:
	QueueList();
	~QueueList();
	int sizeOfQueue();
	bool isEmpty();
	void clear();
	void enqueue(T value);
	T dequeue();
	T peek();
	void display();
};


template<class T>
inline QueueList<T>::QueueList()
{
	head = tail = NULL;
	size = 0;
}

template<class T>
inline QueueList<T>::~QueueList()
{
	while (size > 0)
		T retVal = dequeue();
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
inline void QueueList<T>::enqueue(T value)
{
	Node<T> *newNode = new Node<T>(value);
	if (head == NULL) {
		head = newNode;
	}
	else {
		tail->next = newNode;
	}
	tail = newNode;
	size++;
}

template<class T>
inline T QueueList<T>::dequeue()
{
	if (isEmpty()) {
		Error("Queue is empty");
		return NULL;
	}
	else {
		Node<T> *tempNode = head;
		T temp = tempNode->data;
		head = tempNode->next;
		if (head == NULL) tail = NULL;
		delete tempNode;
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

template <class T>
inline T QueueList<T>::peek() {
	if (isEmpty()) Error("Empty Queue");
	return head->data;
}

#endif // !__Queuelist_h__