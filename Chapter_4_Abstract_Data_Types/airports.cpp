/*
* File: airports.cpp
* ------------------
* This program looks up a three-letter airport code in a Map object.
*/
#include "HeaderFiles\genlib.h"
#include "HeaderFiles\simpio.h"
#include "HeaderFiles\strutils.h"
#include <map>
#include <iostream>
#include <fstream>
#include <string>
/* Private function prototypes */
void ReadCodeFile(map<string, string> & map);
/* Main program */
int main() {
	map<string, string> airportCodes;
	ReadCodeFile(airportCodes);
	while (true) {
		cout << "Airport code: ";
		string code = ConvertToUpperCase(GetLine());
		if (code == "") break;
		if (airportCodes.count(code) == 1) {
			cout << code << " is in " << airportCodes.find(code)->second << endl;
		}
		else {
			cout << "There is no such airport code" << endl;
		}
	}
	return 0;
}
/* Reads the data file into the map */
void ReadCodeFile(map<string, string> & map) {
	ifstream infile;
	infile.open("AirportCodes.txt");
	if (infile.fail()) Error("Can't read the data file");
	while (true) {
		string line;
		getline(infile, line);
		if (infile.fail()) break;
		if (line.length() < 4 || line[3] != '=') {
			Error("Illegal data file line: " + line);
		}
		string code = ConvertToUpperCase(line.substr(0, 3));

		pair<string, string> keyValue(code,line.substr(4));
		map.insert(keyValue);
	}
	infile.close();
}