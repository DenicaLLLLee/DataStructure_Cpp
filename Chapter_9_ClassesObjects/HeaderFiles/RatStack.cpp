#include "HeaderFiles\genlib.h"
#include "Chapter_9_ClassesObjects\HeaderFiles\Rational.h"
#include "RatStack.h"


RatStack::RatStack()
{
	elements = new Rational[INITIAL_CAPACITY];
	capacity = INITIAL_CAPACITY;
	count = 0;
}

RatStack::~RatStack()
{
	delete[] elements;
}

int RatStack::size() {
	return count;
}

bool RatStack::isEmpty() {
	return (count == 0);
}

void RatStack::clear() {
	count = 0;
}

void RatStack::push(Rational num) {
	if (count == INITIAL_CAPACITY) expandCapacity();
	elements[count++] = num;
}

Rational RatStack::pop() {
	if (isEmpty()) Error("Empty stack");
	return elements[--count];
}

Rational RatStack::peek() {
	if (isEmpty()) Error("Empty stack");
	return elements[count - 1];
}

void RatStack::expandCapacity() {
	capacity *= INITIAL_CAPACITY;
	Rational *newElements = new Rational[capacity];
	for (int i = 0; i < size(); i++) {
		newElements[i] = elements[i];
	}
	delete[] elements;
	elements = newElements;
}