#pragma once
/*
* File: genlib.h
* --------------
* This header file is included in all programs written for
* Stanford's C++ courses and provides a few common definitions.
* Note that this header has a "using namespace std" clause.
* If a file includes the genlib.h header, it can then use
* features from the std namespace without qualifying by scope.
*/
#ifndef _genlib_h
#define _genlib_h
#include <string>
#include <exception>
using namespace std;
/*
* Class: ErrorException
* ---------------------
* This exception is raised by calls to the Error function, which
* makes it possible for clients to respond to error conditions
* without having their programs simply exit.
*/
class ErrorException : public exception {
public:
	ErrorException(string msg);
	virtual ~ErrorException() throw ();
	virtual string getMessage();
private:
	string msg;
};
/*
* Function: Error
* Usage: Error(msg);
* ------------------
* Error is used to signal an error condition in a program. It
* first attempts to throw an ErrorException. If that fails,
* it outputs the error message string to the cerr stream and
* then exits the program with a status code indicating failure.
*/
void Error(string str);
/*
* Function macro: main
* --------------------
* The purpose of this macro definition is to rename the student
* main to Main in order to allow a custom main defined in our
* libraries to configure the application before passing control
* back to the student program.
*/
//#define main Main
#endif