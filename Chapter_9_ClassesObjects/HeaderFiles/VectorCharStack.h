#pragma once
#ifndef __vectorcharstack_h__
#define __vectorcharstack_h__
class VectorCharStack
{
public:
	VectorCharStack();
	~VectorCharStack();
	int size();
	bool isEmpty();
	void clear();
	void push(char ch);
	char pop();
	char peek();

private:
	std::vector<char> charStack;
};
#endif // !__vectorcharstack_h__



