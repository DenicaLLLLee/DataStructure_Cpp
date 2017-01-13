#pragma once
#ifndef __numstack_h__
#define __numstack_h__
class NumStack
{
private:
	static const int INITIAL_CAPACITY = 100;
	double *elements; /* Dynamic array of characters */
	int capacity; /* Allocated size of that array */
	int count; /* Current count of chars pushed */
	void expandCapacity();

public:
	NumStack();
	~NumStack();
	int size();
	bool isEmpty();
	void clear();
	void push(double num);
	double pop();
	double peek();
};
#endif // !__numstack_h__




