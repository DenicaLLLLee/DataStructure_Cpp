#pragma once
#ifndef __stackutility_h__
#define __stackutility_h__

template <class T>
std::stack<T> reverse(std::stack<T> & stk) {
	std::stack<T> reversedStack;
	while (!stk.empty()) {
		reversedStack.push(stk.top());
		stk.pop();
	}
	return reversedStack;
}

template <class T>
void display(std::stack<T> & stk) {
	while (!stk.empty()) {
		std::cout << stk.top() << std::endl;
		stk.pop();
	}
}
#endif // !__stackutility_h__

