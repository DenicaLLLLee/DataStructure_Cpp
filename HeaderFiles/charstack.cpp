/*
* File: charstack.cpp
* -------------------
* This file implements the CharStack class.
*/
#include "genlib.h"
#include "HeaderFiles\CharStack.h"
/*
* Implementation notes: CharStack constuctor and destructor
* ---------------------------------------------------------
* These methods have little work to do because the fixed-size
* array is allocated on the stack and not in the heap.
*/
CharStack::CharStack() {
	elements = new char[INITIAL_CAPACITY];
	capacity = INITIAL_CAPACITY;
	count = 0;
}
CharStack::~CharStack() {
	delete[] elements;
}
/*
* Implementation notes: size, isEmpty, clear
* ------------------------------------------
* These implementations should be self-explanatory.
*/
int CharStack::size() {
	return count;
}
bool CharStack::isEmpty() {
	return count == 0;
}
void CharStack::clear() {
	count = 0;
}
/*
* Implementation notes: push, pop, peek
* -------------------------------------
* The only subtlety in this implementation is the use of
* the ++ and -- to select the correct index in the stack
* and adjust the count variable at the same time.
*/
void CharStack::push(char ch) {
	if (count == INITIAL_CAPACITY) expandCapacity();
	elements[count++] = ch;
}
char CharStack::pop() {
	if (isEmpty()) Error("pop: Attempting to pop an empty stack");
	return elements[--count];
}
char CharStack::peek() {
	if (isEmpty()) Error("peek: Attempting to peek at an empty stack");
		return elements[count - 1];
}

void CharStack::expandCapacity() {
	capacity *= 2;
	char *arr = new char[capacity];
	for (int i = 0; i < count; i++) {
		arr[i] = elements[i];
	}
	delete[] elements;
	elements = arr;
	delete[] arr;
}