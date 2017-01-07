#include <iostream>
#include <string>
#include <vector>
#include "recursiveparadigm.h"

void MoveSingleDisk(char start, char finish)
{
	std::cout << start << " -> " << finish << std::endl;
}

void MoveTower(int n, char start, char finish, char temp) {
	if (n == 0) {
		MoveSingleDisk(start, finish);
	}
	else {
		MoveTower(n - 1, start, temp, finish);
		MoveSingleDisk(start, finish);
		MoveTower(n - 1, temp, finish, start);
	}
}

void ListPermutations(std::string str) {
	RecursivePermute("", str);
}

void RecursivePermute(std::string prefix, std::string rest) {
	if (rest == "") {
		std::cout << prefix << std::endl;
	}
	else {
		for (int i = 0; i < rest.length(); i++) {
			//Add the character to the end of prefix.
			std::string newPrefix = prefix + rest[i];	

			//Remove character from rest.
			std::string newRest = rest.substr(0, i) + rest.substr(i + 1);	

			//Use recursion to generate permutations with the updated values for prefix and rest.
			RecursivePermute(newPrefix, newRest);
		}
	}
}

int NHanoiMoves(int n) {
	static int count = 0;
	if (n == 1) {
		count++;
	}
	else {
		NHanoiMoves(n - 1);
		count++;
		NHanoiMoves(n - 1);
	}
	return count;
}

void ListMnemonics(std::string str) {
	char* result = new char[str.length()];
	result[str.length()] = '\0';
	PhoneDigits(str, 0, result);
}

void PhoneDigits(std::string str, int currentDigit, char* output) {
	const char hashTable[10][5] = { "", "", "abc", "def", "ghi", "jkl",
		"mno", "pqrs", "tuv", "wxyz" };

	if (currentDigit == str.length())
	{
		std::cout << output << " ";
		return;
	}
	else {
		for (int i = 0; i < strlen(hashTable[str[currentDigit] - '0']); i++)
		{
			output[currentDigit] = hashTable[str[currentDigit] - '0'][i];
			PhoneDigits(str, currentDigit + 1, output);
			if (str[currentDigit] == 0 || str[currentDigit] == 1)
				return;
		}
	}
}