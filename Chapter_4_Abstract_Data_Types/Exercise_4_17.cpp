/*
As noted in section 4.5, a map is often called a symbol table when it is used in the
context of a programming language, because it is precisely the structure you need to
store variables and their values. For example, if you are working in an application in
which you need to assign floating-point values to variable names, you could do so
using a map declared as follows:
Map<double> symbolTable;
Write a C++ program that declares such a symbol table and then reads in
command lines from the user, which must be in one of the following forms:
• A simple assignment statement of the form
var = number
This statement should store the value represented by the token number in the
symbol table under the name var. Thus, if the user were to enter
pi = 3.14159
the string pi should be assigned a value of 3.14159 in symbolTable.
• The name of a variable alone on a line. When your program reads in such a line,
it should print out the current value in the symbol table associated with that name.
Thus, if pi has been defined as shown in the preceding example, the command
pi
should display the value 3.14159.
• The command list, which is interpreted by the program as a request to display
all variable/value pairs currently stored in the symbol table, not necessarily in any
easily discernable order.
• The command quit, which should exit from the program.
*/

#include <iostream>
#include <map>
#include <string>
#include "HeaderFiles\maputility.h"

using namespace std;

int main() {
	map<string, double> Map;
	string inputString = "";
	std::string::size_type sz;
	while (true) {
		cout << ">";
		getline(cin, inputString);
		if (inputString == "quit") {
			break;
		}
		else if (inputString == "list") {
			list(Map);
		}
		else if (Map.find(inputString) != Map.end()) {
				display(Map, inputString);
		}
		else {
			std::size_t foundPos = inputString.find("=");
			string key = inputString.substr(0, foundPos - 1);
			string value = inputString.substr(foundPos + 2);
			double val = stod(value, &sz);
			add(Map, key, val);
		}
	}
}