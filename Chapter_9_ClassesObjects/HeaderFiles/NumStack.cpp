#include "HeaderFiles\genlib.h"
#include "Chapter_9_ClassesObjects\HeaderFiles\NumStack.h"

NumStack::NumStack()
{
	elements = new double[INITIAL_CAPACITY];
	capacity = INITIAL_CAPACITY;
	count = 0;
}

NumStack::~NumStack()
{
	delete[] elements;
}

int NumStack::size() {
	return count;
}

bool NumStack::isEmpty() {
	return (count == 0);
}

void NumStack::clear() {
	count = 0;
}

void NumStack::push(double num) {
	if (count == INITIAL_CAPACITY) expandCapacity();
	elements[count++] = num;
}

double NumStack::pop() {
	if (isEmpty()) Error("Empty stack");
	return elements[--count];
}

double NumStack::peek() {
	if (isEmpty()) Error("Empty stack");
	return elements[count-1];
}

void NumStack::expandCapacity() {
	capacity *= INITIAL_CAPACITY;
	double *newElements = new double[capacity];
	for (int i = 0; i < size(); i++) {
		newElements[i] = elements[i];
	}
	delete[] elements;
	elements = newElements;
}