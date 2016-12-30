/*
	Stack Utilities
	Any operation/function related
	with stacks can be found here.
	Oyashi
	12/29/2016
*/
#pragma once
#ifndef __stackutility_h__
#define __stackutility_h__

/*
Function: reverse
Usage: stack<T> = reverse(std::stack<T> & stk);
------------------------------
This function reverses the elements
in the given stack.
*/
template <class T>
std::stack<T> reverse(std::stack<T> & stk) {
	std::stack<T> reversedStack;
	while (!stk.empty()) {
		reversedStack.push(stk.top());
		stk.pop();
	}
	return reversedStack;
}

/*
Function: display
Usage: display(std::stack<T> & stk);
------------------------------
This function displays the elements
in the given stack.
*/
template <class T>
void display(std::stack<T> & stk) {
	while (!stk.empty()) {
		std::cout << stk.top() << std::endl;
		stk.pop();
	}
}

/*
Function: bracketCheck
Usage: bool retVal = bracketCheck(string str);
------------------------------
This function returns true if the given
string has properly matching brackets.

Added : 12/30/2016
*/
bool bracketCheck(std::string str) {
	std::stack<char> bracketStack;
	char expectedBrckt = ' ';
	bool bracketFound = true;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '{') {
			bracketStack.push(str[i]);
		}
		else if (str[i] == '(') {
			bracketStack.push(str[i]);
		}
		else if (str[i] == '[') {
			bracketStack.push(str[i]);
		}
		else if (str[i] == '}') {
			if (bracketStack.top() == '{') {
				bracketStack.pop();
				if (!bracketStack.empty())
					expectedBrckt = bracketStack.top();
				bracketFound = true;
			}
			else {
				bracketFound = false;
				break;
			}
		}
		else if (str[i] == ')') {
			if (bracketStack.top() == '(') {
				bracketStack.pop();
				if (!bracketStack.empty())
					expectedBrckt = bracketStack.top();
				bracketFound = true;
			}
			else {
				bracketFound = false;
				break;
			}
		}
		else if (str[i] == ']') {
			if (bracketStack.top() == '[') {
				bracketStack.pop();
				if (!bracketStack.empty())
					expectedBrckt = bracketStack.top();
				bracketFound = true;
			}
			else {
				bracketFound = false;
				break;
			}
		}
		else
			bracketFound = false;
	}
	if (bracketFound) {
		return true;
	}
	else
		return false;
}
#endif // !__stackutility_h__

