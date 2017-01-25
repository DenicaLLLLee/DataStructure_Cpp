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
	Node<T>* head;
	int size;

public:
	StackList();
	~StackList();
	int sizeOfStack();
	bool isEmpty();
	void clear();
	void push(T value);
	T pop();
};


#endif // !__stacklist_h__

template<class T>
inline StackList<T>::StackList()
{
	head = NULL;
	size = 0;
}

template<class T>
inline StackList<T>::~StackList()
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
inline void StackList<T>::push(T value)
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
inline T StackList<T>::pop()
{
	if (head == NULL || size == 0) {
		Error("Stack is empty");
		return NULL;
	}
	else {
		T temp;
		if (size == 1) {
			temp = head->data;
			delete head;
			head = NULL;
		}
		else {
			Node<T>* curr = head;
			while (curr->next->next) {
				curr = curr->next;
			}
			temp = curr->next->data;
			delete curr->next;
			curr->next = NULL;
		}
		size--;
		return temp;
	}
}
