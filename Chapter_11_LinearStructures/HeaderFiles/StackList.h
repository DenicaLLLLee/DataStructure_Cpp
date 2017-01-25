/*
	Header and inline implementation
	of generic stacks using linked list
	Oyashi
	01/24/2017
*/
#pragma once
#ifndef __stacklist_h__
#define __stacklist_h__
#include "genlib.h"
template <class T>
struct Node {
	T data;
	Node<T>* next;

	Node() :data(), next(NULL) {}
	Node(T d) :data(d), next(NULL) {}
};

template <class T>
class StackList {
private:
	Node<T> *head, *top;
	int size;

public:
	StackList();
	~StackList();
	int sizeOfStack();
	bool isEmpty();
	void clear();
	void push(T value);
	T pop();
	T peek();
	void display();
};


#endif // !__stacklist_h__

template<class T>
inline StackList<T>::StackList()
{
	head = top = NULL;
	size = 0;
}

template<class T>
inline StackList<T>::~StackList()
{
	clear();
}

template<class T>
inline int StackList<T>::sizeOfStack()
{
	return size;
}

template<class T>
inline bool StackList<T>::isEmpty()
{
	return size == 0;
}

template<class T>
inline void StackList<T>::clear()
{
	while (!isEmpty())
		T retVal = pop();
}

template<class T>
inline void StackList<T>::push(T value)
{
	Node<T> *newNode = new Node<T>(value);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node<T> *temp = head;
		newNode->next = temp;
		head = newNode;
	}
	top = newNode;
	size++;
}

template<class T>
inline T StackList<T>::pop()
{
	if (isEmpty()) {
		Error("Empty stack");
		return NULL;
	}
	else {
		T temp = top->data;
		head = top->next;
		delete top;
		top = head;
		size--;
		return temp;
	}
}

template<class T>
inline T StackList<T>::peek()
{
	if (isEmpty()) {
		Error("Empty Stack");
		return NULL;
	}
	else {
		return top->data;
	}
}

template<class T>
inline void StackList<T>::display()
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
