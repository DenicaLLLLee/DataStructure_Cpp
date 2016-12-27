#pragma once
/*
* File: strutils.h
* --------------
* The strutils.h file defines the interface for a library of string
* utilities.
*/
#ifndef _strutils_h
#define _strutils_h
#include <string>
using namespace std;
/*
* Function: ConvertToLowerCase
* Usage: s = ConvertToLowerCase(s);
* ---------------------------------
* This function returns a new string with all
* alphabetic characters converted to lower case.
*/
string ConvertToLowerCase(string s);
/*
* Function: ConvertToUpperCase
* Usage: s = ConvertToUpperCase(s);
* ---------------------------------
* This function returns a new string with all
* alphabetic characters converted to upper case.
*/
string ConvertToUpperCase(string s);
/*
* Function: IntegerToString
* Usage: s = IntegerToString(n);
* ------------------------------
* This function converts an integer into the corresponding
* string of digits. For example, IntegerToString(123)
* returns "123" as a string.
*/
string IntegerToString(int n);
/*
* Function: StringToInteger
* Usage: n = StringToInteger(s);
* ------------------------------
* This function converts a string of digits into an integer.
* If the string is not a legal integer or contains extraneous
* characters, StringToInteger signals an error condition.
*/
int StringToInteger(string s);
/*
* Function: RealToString
* Usage: s = RealToString(d);
* ---------------------------
* This function converts a floating-point number into the
* corresponding string form. For example, calling
* RealToString(23.45) returns "23.45".
*/
string RealToString(double d);
/*
* Function: StringToReal
* Usage: d = StringToReal(s);
* ---------------------------
* This function converts a string representing a real number
* into its corresponding value. If the string is not a
* legal floating-point number or if it contains extraneous
* characters, StringToReal signals an error condition.
*/
double StringToReal(string s);
#endif
