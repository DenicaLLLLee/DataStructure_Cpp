#include <iostream>
#include <string>
#include "recursiveparadigm.h"

void MoveSingleDisk(char start, char finish)
{
	std::cout << start << " -> " << finish << std::endl;
}

void MoveTower(int n, char start, char finish, char temp) {
	if (n == 1) {
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
