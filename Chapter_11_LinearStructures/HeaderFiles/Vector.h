#pragma once
#ifndef __vector_h__
#define __vector_h__
#include "genlib.h"
template <class T>
class Vector
{
public:
	Vector();
	~Vector();
	int size();
	bool isEmpty();
	void clear();
	T getAt(int index);
	void setAt(int index, T value);
	void insertAt(int index, T value);
	void removeAt(int index, T value);
	void add(T elem);
	T & operator[](int index);

	class Iterator {
	public:
		Iterator();
		bool hasNext();
		T next();
	private:
		Vector *vp;
		int index;

		Iterator(Vector *vp);
		friend class Vector;
	};
	friend class Iterator;
	Iterator iterator();

private:
	static const int INITIAL_CAPACITY = 100;
	T *elements;
	int capacity;
	int count;
	void expandCapacity();
};
#endif // !__vector_h__

template <class T>
inline Vector<T>::Vector()
{
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template <class T>
inline Vector<T>::~Vector()
{
	delete[] elements;
}

template <class T>
inline int Vector<T>::size() {
	return count;
}

template <class T>
inline bool Vector<T>::isEmpty() {
	return count == 0;
}

template <class T>
inline void Vector<T>::clear() {
	delete[] elements;
	capacity = INITIAL_CAPACITY;
	count = 0;
	elements = new T[capacity];
}

template <class T>
T Vector<T>::getAt(int index) {
	if (index < 0 || index >= count) {
		Error("Index out of range");
	}
	return elements[index];
}

template <class T>
void Vector<T>::setAt(int index, T elem) {
	if (index < 0 || index >= count) {
		Error("Index out of range");
	}
	elements[index] = elem;
}

template<class T>
inline void Vector<T>::insertAt(int index, T value)
{
	if (index < 0 || index > count) {
		Error("Index out of range");
	}
	if (count == capacity) expandCapacity();
	for (int i = count; i > index; i--) {
		elements[i] = elements[i - 1];
	}
	elements[index] = value;
	count++;
}

template<class T>
inline void Vector<T>::removeAt(int index, T value)
{
	if (index < 0 || index >= count) {
		Error("Index out of range");
	}
	for (int i = index; i < count-1; i++) {
		elements[i] = elements[i + 1];
	}
	count--;
}

template<class T>
inline void Vector<T>::add(T elem)
{
	insertAt(count, elem);
}

template<class T>
inline T & Vector<T>::operator[](int index)
{
	if (index < 0 || index >= count) {
		Error("Index out of range");
	}
	return elements[index];
}

template <class T>
inline void Vector<T>::expandCapacity() {
	T *oldElements = elements;
	capacity *= 2;
	elements = new T[capacity];
	for (int i = 0; i < count; i++) {
		elements[i] = oldElements[i];
	}
	delete[] oldElements;
}

template <typename ElemType>
Vector<ElemType>::Iterator::Iterator() {
	vp = NULL;
}
template <typename ElemType>
typename Vector<ElemType>::Iterator Vector<ElemType>::iterator() {
	return Iterator(this);
}
template <typename ElemType>
Vector<ElemType>::Iterator::Iterator(Vector *vp) {
	this->vp = vp;
	index = 0;
}
template <typename ElemType>
bool Vector<ElemType>::Iterator::hasNext() {
	if (vp == NULL) Error("hasNext called on uninitialized iterator");
	return index < vp->count;
}
template <typename ElemType>
ElemType Vector<ElemType>::Iterator::next() {
	if (vp == NULL) Error("next called on uninitialized iterator");
	if (!hasNext()) Error("next: No more elements");
	return vp->getAt(index++);
}