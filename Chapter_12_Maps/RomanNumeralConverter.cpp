/*
	Implementation of map using array
	Its ineffective
	Oyashi
	01/26/2017
*/

#include <iostream>
#include <string>
#include "Chapter_12_Maps\HeaderFiles\mapHash.h"

using namespace std;

int main() {
	Map<int> romanNumerals;
	romanNumerals.put("I", 1);
	romanNumerals.put("V", 5);
	romanNumerals.put("X", 10);
	romanNumerals.put("L", 50);
	romanNumerals.put("C", 100);
	romanNumerals.put("D", 500);
	romanNumerals.put("M", 1000);

	cout << romanNumerals.get("M") + romanNumerals.get("V") + romanNumerals.get("X") << endl;
}