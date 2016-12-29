
#include <algorithm>
#include "HeaderFiles\strutils.h"

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

bool EqualIgnoringCase(string str1, string str2) {
	if (str1.length() == str2.length() && str1.compare(str2) == 0) { return true; }
	else { return false; }
}

string Capitalize(string str) {
	string firstLetter = str.substr(0, 1);
	string remaining = str.substr(1, str.length());
	firstLetter = ConvertToUpperCase(firstLetter);
	remaining = ConvertToLowerCase(remaining);
	return firstLetter + remaining;
}

bool IsPalindrome(string str) {
	if (str.length() == 1) {
		return true;
	}
	else {
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] == str[(str.length()-1) - i]) {
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
}

string EncodeString(string str, int key) {
	string capitalRepo = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string smallRepo = "abcdefghijklmnopqrstuvwxyz";
	string encodedString;

	while (key > 26) {
		key %= 26;
	}

	for (int i = 0; i < str.length(); i++) {
		int pos = 0, newPos = 0 ;
		if (isupper(str[i])) {
			pos = capitalRepo.find(str[i]);
			newPos = pos + key;
			encodedString += capitalRepo.at(newPos);
		}
		else {
			pos = smallRepo.find(str[i]);
			if (pos > 0) {
				newPos = pos + key;
				encodedString += smallRepo.at(newPos);
			}
			else {
				encodedString += str.at(i);
			}	
		}
	}
	return encodedString;
}

string SubString(string s, int pos, int len) {
	string subString = "";
	if (pos < 0) pos = 0;
	if (len > s.length() - pos) len = s.length() - pos;
	if (pos > s.length() - 1) return subString;

	for (int i = pos; i <= len; i++) {
		subString += s.at(i);
	}
	return subString;
}