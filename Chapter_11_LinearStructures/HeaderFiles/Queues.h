#pragma once
#ifndef __queues_h__
#define __queues_h__
#include "genlib.h"
template <class T>
class Queues {
private:
	static const int INITIAL_CAPACITY = 10;
	T *elements;
	int count;
	int capacity;
	void expandCapacity();

public:
	Queues();
	~Queues();
	void clear();
	bool isEmpty();
	int size();
	void push(T elem);
	T pop();
};
#endif // !__queues_h__

template<class T>
inline void Queues<T>::expandCapacity()
{
	T *oldElements = elements;
	capacity *= 2;
	elements = new T[capacity];
	for (int i = 0; i < count; i++) {
		elements[i] = oldElements[i];
	}
	delete[] oldElements;
}

template<class T>
inline Queues<T>::Queues()
{
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template<class T>
inline Queues<T>::~Queues()
{
	delete[] elements;
}

template<class T>
inline void Queues<T>::clear()
{
	delete[] elements;
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template<class T>
inline bool Queues<T>::isEmpty()
{
	return count == 0;
}

template<class T>
inline int Queues<T>::size()
{
	return count;
}

template<class T>
inline void Queues<T>::push(T elem)
{
	if (count == capacity) expandCapacity();
	elements[count] = elem;
	count++;
}

template<class T>
inline T Queues<T>::pop()
{
	if (isEmpty()) Error("Empty queue");
	T retVal = elements[0];
	for (int i = 0; i < count - 2; i++) {
		elements[i] = elements[i + 1];
	}
	count--;
	return retVal;
}
