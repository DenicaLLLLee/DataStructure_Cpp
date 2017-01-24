#ifndef __stack_h__
#define __stack_h__
#include "genlib.h"
template<class T>
class Stack {
private:
	static const int INITIAL_CAPACITY = 10;
	T *elements;
	int count;
	int capacity;
	void expandCapacity();

public:
	Stack<T>();
	~Stack<T>();
	void clear();
	bool isEmpty();
	void push(T elm);
	T pop();
};
#endif // !__stack_h__

template <class T>
Stack<T>::Stack() {
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template <class T>
Stack<T>::~Stack() {
	delete[] elements;
}

template <class T>
inline void Stack<T>::expandCapacity() {
	T *oldElements = elements;
	capacity *= 2;
	elements = new T[capacity];
	for (int i = 0; i < count; i++) {
		elements[i] = oldElements[i-1];
	}
	delete[] oldElements;
}

template<class T>
inline void Stack<T>::clear()
{
	delete[] elements;
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template<class T>
inline bool Stack<T>::isEmpty()
{
	return count == 0;
}

template<class T>
inline void Stack<T>::push(T elm)
{
	if (count == capacity) expandCapacity();
	elements[count] = elm;
	count++;
}

template<class T>
inline T Stack<T>::pop()
{
	if (isEmpty()) Error("Empty stack");
	T temp = elements[count - 1];
	count--;
	return temp;
}


