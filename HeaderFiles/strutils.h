#pragma once
/*
* File: strutils.h
* ----------------
* The strutils.h file defines some useful helper functions
* not included by the C++ string library. These were taken
* from Eric Roberts's original strlib from his text
* _The Art and Science of C_.
*/
#ifndef _strutils_h
#define _strutils_h
#include "Archive\genlib.h"
/*
* Function: IntegerToString
* Usage: s = IntegerToString(n);
* ------------------------------
* This function converts an integer into the corresponding
* string of digits. For example, IntegerToString(123)
* returns "123" as a string.
*/
string IntegerToString(int num);
/*
* Function: RealToString
* Usage: s = RealToString(d);
* ---------------------------
* This function converts a floating-point number into the
* corresponding string form. For example, calling
* RealToString(23.45) returns "23.45".
*/
string RealToString(double num);
/*
* Function: StringToInteger
* Usage: n = StringToInteger(s);
* ------------------------------
* This function converts a string of digits into an integer.
* If the string is not a legal integer or contains extraneous
* characters, StringToInteger signals an error condition.
*/
int StringToInteger(string str);
/*
* Function: StringToReal
* Usage: d = StringToReal(s);
* ---------------------------
* This function converts a string representing a real number
* into its corresponding value. If the string is not a
* legal floating-point number or if it contains extraneous
* characters, StringToReal signals an error condition.
*/
double StringToReal(string str); 
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
* Function: EqualIgnoringCase
* Usage: EqualIgnoringCase(str1, str2);
*/
bool EqualIgnoringCase(string str1, string str2);
/*
* Function Capitalize
* Usage: s = Capitalize(string str);
*/
string Capitalize(string str);
/*
* Function IsPalindrome
* Usage: IsPalindrome(string str);
*/
bool IsPalindrome(string str);
/*
* Function EncodeString
* Usage: s = EncodeString(string str, int key);
*/
string EncodeString(string str, int key);
/*
* Function SubString
* Usage: s = SubString(string s, int pos, int len);
*/
string SubString(string s, int pos, int len);
#endif
