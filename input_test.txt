/*
	Implementation of Pig Latin concept
	Oyashi
	12/26/2016
*/

#include <iostream>
#include <string>

using namespace std;

string PigLatin(string word);
int FindPosFirstVowel(string word);

int main() {
	cout << PigLatin("oyesh") << endl;

}

string PigLatin(string word) {
	int vowelPos = FindPosFirstVowel(word);
	if (vowelPos == -1) return word;
	else if (vowelPos == 0) return word + "way";
	else {
		string word1 = word.substr(0, vowelPos);
		string word2 = word.substr(vowelPos, word.length());
		return word2 + word1 + "ay";
	}

}

int FindPosFirstVowel(string word) {
	int a = word.find('a');
	int e = word.find('e');
	int i = word.find('i');
	int o = word.find('o');
	int u = word.find('u');
	if (a > -1) {
		return a;
	}
	else if (e > -1) {
		return e;
	}
	else if (i > -1) {
		return i;
	}
	else if (o > -1) {
		return o;
	}
	else if (u > -1) {
		return u;
	}
	else {
		return -1;
	}
}