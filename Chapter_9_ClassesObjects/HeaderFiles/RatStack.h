#pragma once
#ifndef __ratstack_h__
#define __ratstack_h__
class RatStack
{
private:
	static const int INITIAL_CAPACITY = 100;
	Rational *elements; /* Dynamic array of characters */
	int capacity; /* Allocated size of that array */
	int count; /* Current count of chars pushed */
	void expandCapacity();

public:
	RatStack();
	~RatStack();
	int size();
	bool isEmpty();
	void clear();
	void push(Rational num);
	Rational pop();
	Rational peek();
};
#endif // !__ratstack_h__
