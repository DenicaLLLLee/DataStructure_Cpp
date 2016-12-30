///*
//* File: rpncalc.cpp
//* -----------------
//* This program simulates an electronic calculator that uses
//* reverse Polish notation, in which the operators come after
//* the operands to which they apply.
//*/
//
//#include <iostream>
//#include <stack>
//#include "HeaderFiles\simpio.h"
//#include "HeaderFiles\strutils.h"
//
//using namespace std;
//
///* Private function prototypes */
//void ApplyOperator(char op, stack<double> &operandStack);
//void HelpCommand();
//void ClearStack(stack<double> &operandStack);
//
//int main() {
//	stack<double> operandStack;
//	cout << "RPN Calculator Simulation (type H for help)" << endl;
//	while (true) {
//		cout << "> ";
//		string line = GetLine();
//		char ch = toupper(line[0]);
//		if (ch == 'Q') {
//			break;
//		}
//		else if (ch == 'C') {
//			ClearStack(operandStack);
//		}
//		else if (ch == 'H') {
//			HelpCommand();
//		}
//		else if (isdigit(ch)) {
//			operandStack.push(StringToReal(line));
//		}
//		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' ){
//			ApplyOperator(ch, operandStack);
//		}
//		else {
//			cout << "Invalid option" << endl;
//		}
//	}
//	return 0;
//}
//
///*
//* Function: ApplyOperator
//* Usage: ApplyOperator(op, operandStack);
//* ---------------------------------------
//* This function applies the operator to the top two elements on
//* the operand stack. Because the elements on the stack are
//* popped in reverse order, the right operand is popped before
//* the left operand.
//*/
//void ApplyOperator(char op, stack<double> &operandStack) {
//	double result;
//	double rhs = operandStack.top();
//	operandStack.pop();
//	double lhs = operandStack.top();
//	operandStack.pop();
//	switch (op) {
//	case '+': result = lhs + rhs; break;
//	case '-': result = lhs - rhs; break;
//	case '*': result = lhs * rhs; break;
//	case '/': result = lhs / rhs; break;
//	default: cout << "Invalid operator" << endl; break;
//	}
//	cout << result << endl;
//	operandStack.push(result);
//}
//
///*
//* Function: HelpCommand
//* Usage: HelpCommand();
//* ---------------------
//* This function generates a help message for the user.
//*/
//void HelpCommand() {
//	cout << "Enter expressions in Reverse Polish Notation," << endl;
//	cout << "in which operators follow the operands to which" << endl;
//	cout << "they apply. Each line consists of a number, an" << endl;
//	cout << "operator, or one of the following commands:" << endl;
//	cout << " Q -- Quit the program" << endl;
//	cout << " H -- Display this help message" << endl;
//	cout << " C -- Clear the calculator stack" << endl;
//}
//
///*
//* Function: ClearStack
//* Usage: ClearStack(stack);
//* -------------------------
//* This function clears the stack by popping elements until empty.
//*/
//void ClearStack(stack<double> &operandStack) {
//	while (!operandStack.empty()) {
//		operandStack.pop();
//	}
//}