/*
In the 1960s, entertainer Steve Allen often played a game called madlibs as part of
his comedy routine. Allen would ask the audience to supply words that fit specific
categories—a verb, an adjective, or a plural noun, for example—and then use these
words to fill in blanks in a previously prepared text that he would then read back to
the audience. The results were usually nonsense, but often very funny nonetheless.
In this exercise, your task is to write a program that plays madlibs with the user.
The text for the story comes from a text file that includes occasional placeholders
enclosed in angle brackets. For example, suppose the input file carroll.txt
contains the following excerpt from Lewis Carroll’s poem “The Walrus and the
Carpenter,” with a few key words replaced by placeholders as shown:

Your program must read this file and display it on the console, giving the user the
chance to fill in the placeholders with new strings. If Carroll himself had used the
program, he would likely have obtained the following sample run:

Note that the user must provide all the substitutions before any of the text is
displayed. This design complicates the program structure slightly because it is
impossible to display the output text as you go. The simplest strategy is to write the
output to a temporary file first and then copy the contents of the temporary file back
to the screen.

	Oyashi
	12/28/2016
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> retrieveVariable(ifstream &infile);
void replaceVariable(ifstream &infile, fstream &outfile, vector<string> ansRepo);

int main() {
	ifstream inputFile;
	fstream outputFile;

	vector<string> varRepo;
	vector<string> answerRepo;

	string inputFilename = "carroll.txt";
	string answer;
	string tempOutput;

	inputFile.open(inputFilename);
	if (inputFile.fail()) {
		cout << "Could not open the file" << endl;
		exit(1);
	}

	outputFile.open("temp.txt", fstream::in | fstream::out);
	if (outputFile.fail()) {
		cout << "Could not open the output file" << endl;
		exit(1);
	}

	varRepo = retrieveVariable(inputFile);

	cout << "Input file : " << inputFilename << endl;
	for (vector<string>::iterator itr = varRepo.begin(); itr != varRepo.end(); ++itr) {
		cout << *itr << " : "; cin >> answer;
		answerRepo.push_back(answer);
		answer.clear();
	}
	cout << endl;

	inputFile.clear();
	inputFile.seekg(0,inputFile.beg);

	replaceVariable(inputFile, outputFile, answerRepo);

	outputFile.clear();
	outputFile.seekg(0, outputFile.beg);

	while (getline(outputFile, tempOutput)) {
		cout << tempOutput << endl;
	}

	inputFile.close();
	outputFile.close();
}

/*
	This function extracts the variable name given in the text
	enclosed in the brackets
*/
vector<string> retrieveVariable(ifstream &infile) {
	int ch;
	string var;
	vector<string> varRepo;

	while ((ch = infile.get()) != EOF) {
		if (ch == '<') {
			while (ch != '>') {
				ch = infile.get();
				if(ch != '>')
					var += ch;
			}
			varRepo.push_back(var);
			var.clear();
		}
	}
	return varRepo;
}

/*
	This function replaces the variable with the answers given by the user
*/
void replaceVariable(ifstream &infile, fstream &outfile, vector<string> ansRepo) {
	int ch;
	int i = 0;

	while ((ch = infile.get()) != EOF) {
		if (ch == '<') {
			for (char& c : ansRepo[i]) {
				outfile.put((int)c);
			}
			i = i + 1;
			while (ch != '>') {
				ch = infile.get();
			}
		}
		else {
			outfile.put(ch);
		}
	}
}