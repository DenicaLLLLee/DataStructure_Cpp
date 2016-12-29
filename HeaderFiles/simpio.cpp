#include "Archive\simpio.h"

int GetInteger()
{
	int input;
	std::cin >> input;
	return input;
}

long GetLong()
{
	long input;
	cin >> input;
	return input;
}

double GetReal()
{
	double input;
	cin >> input;
	return input;
}

string GetLine()
{
	string input;
	getline(cin, input);
	return input;
}
