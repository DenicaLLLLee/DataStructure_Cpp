/*
	Find the smallest possible number
	by checking the adjacent digits
	in a given integer
	Oyashi
	12/20/2016
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int X);
string extract(string str, int exceptPos);

int main() {
	int inputNum = 0;
	cout << "Please input the integer " << endl;
	cin >> inputNum;
	int retVal = solution(inputNum);
	cout << "Minimum element : ";
	cout << retVal << endl;
}

int solution(int X) {
	vector<int> answers;
	string::size_type sz;
	string str = to_string(X);
	
	for (int i = 0; i < str.length() - 1; i++) {
		string newString = "";
		if (str[i] > str[i+1]) {
			newString = extract(str, i + 1);
		}
		else {
			newString = extract(str, i);
		}
		answers.push_back(stoi(newString, &sz));
	}
	for (vector<int>::iterator itr = answers.begin(); itr != answers.end(); ++itr) {
		cout << *itr << endl;
	}
	return *min_element(answers.begin(), answers.end());
	
}

string extract(string str, int exceptPos) {
	string newStr = "";
	for (int j = 0; j < str.length(); j++) {
		if (j != exceptPos)
			newStr += str[j];
	}
	return newStr;
}