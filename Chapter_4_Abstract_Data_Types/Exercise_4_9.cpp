/*
Bob Dylan’s 1963 song “The Times They Are A-Changin’” contains the following
lines, which are themselves paraphrased from Matthew 19:30:
And the first one now
Will later be last
For the times they are a-changin’
In keeping with this revolutionary sentiment, write a function
void ReverseQueue(Queue<string> & queue);
that reverses the elements in the queue. Remember that you have no access to the
internal representation of the queue and will need to come up with an algorithm,
presumably involving other structures, that accomplishes the task.

	Oyashi
	12/30/2016
*/

#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include <stack>
#include "HeaderFiles\queueutility.h"

using namespace std;

int main() {
	ifstream inputFile;
	queue<string> que;

	inputFile.open("bobdylan.txt", fstream::in);
	if (inputFile.fail()) cout << "Could not open file" << endl;

	ReadIntoQueue(inputFile, que);

	ReverseQueue(que);

	displayQueue(que);

	inputFile.close();
}