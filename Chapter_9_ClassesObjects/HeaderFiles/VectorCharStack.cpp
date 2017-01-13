#include <vector>
#include "Chapter_9_ClassesObjects\HeaderFiles\VectorCharStack.h"

VectorCharStack::VectorCharStack()
{
}

VectorCharStack::~VectorCharStack()
{
	charStack.clear();
}

int VectorCharStack::size() {
	return charStack.size();
}

bool VectorCharStack::isEmpty() {
	return (charStack.empty() ? true : false);
}

void VectorCharStack::clear() {
	charStack.clear();
}

void VectorCharStack::push(char ch) {
	charStack.push_back(ch);
}

char VectorCharStack::pop() {
	char retVal = charStack.back();
	charStack.pop_back();
	return retVal;
}

char VectorCharStack::peek() {
	return charStack.back();
}