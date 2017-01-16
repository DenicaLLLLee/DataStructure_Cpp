/*
For certain applications, it is useful to be able to generate a series of names that form
a sequential pattern. For example, if you were writing a program to number figures
in a paper, having some mechanism to return the sequence of strings "Figure 1",
"Figure 2", "Figure 3", and so on, would be very handy. However, you might also
need to label points in a geometric diagram, in which case you would want a similar
but independent set of labels for points such as "P0", "P1", "P2", and so forth.
If you think about this problem more generally, the tool you need is a label
generator that allows the client to define arbitrary sequences of labels, each of which
consists of a prefix string ("Figure " or "P" for the examples in the preceding
paragraph) coupled with an integer used as a sequence number. Because the client
may want different sequences to be active simultaneously, it makes sense to define
the label generator as an abstract type called LabelGenerator. To initialize a new
generator, the client provides the prefix string and the initial index as arguments to
the LabelGenerator constructor. Once the generator has been created, the client
can return new labels in the sequence by calling nextLabel on the LabelGenerator.

	Oyashi
	01/15/2017
*/

#include <iostream>
#include <string>
#include "Chapter_9_ClassesObjects\HeaderFiles\LabelGenerator.h"

using namespace std;

int main() {
	LabelGenerator figureNumbers("Figure ", 1);
	LabelGenerator pointNumbers("P", 0);
	cout << "Figure numbers: ";
	for (int i = 0; i < 3; i++) {
		if (i > 0) cout << ", ";
		cout << figureNumbers.nextLabel();
	}
	cout << endl << "Point numbers: ";
	for (int i = 0; i < 5; i++) {
		if (i > 0) cout << ", ";
		cout << pointNumbers.nextLabel();
	}
	cout << endl << "More figures: ";
	for (int i = 0; i < 3; i++) {
		if (i > 0) cout << ", ";
		cout << figureNumbers.nextLabel();
	}
	cout << endl << "More figures: ";
	for (int i = 0; i < 3; i++) {
		if (i > 0) cout << ", ";
		cout << figureNumbers.nextLabel();
	}
	cout << endl;
	return 0;
}