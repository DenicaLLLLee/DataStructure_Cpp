
#include <algorithm>
#include "strutils.h"

string IntegerToString(int num) {
	return to_string(num);
}

string RealToString(double num) {
	return to_string(num);
}

int StringToInteger(string str) {
	string::size_type sz;
	return stoi(str, &sz);
}

double StringToReal(string str) {
	string::size_type sz;
	return stod(str, &sz);
}

string ConvertToLowerCase(std::string s) {
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
}

string ConvertToUpperCase(string s) {
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	return s;
}
