#include "genlib.h"
#include <iostream>
#include "Chapter_10_EfficiencyADTs\HeaderFiles\buffer.h"

EditorBuffer::EditorBuffer() {
	start = cursor = new cellT;
	start->link = NULL;
}

EditorBuffer::~EditorBuffer() {
	cellT *cp = start;
	while (cp != NULL) {
		cellT *next = cp->link;
		delete cp;
		cp = next;
	}
}

void EditorBuffer::insertCharacter(char ch) {
	cellT *cp = new cellT;
	cp->ch = ch;
	cp->link = cursor->link;
	cursor->link = cp;
	cursor = cp;
}

void EditorBuffer::deleteCharacter() {
	if (cursor->link != NULL) {
		cellT *oldcell = cursor->link;
		cursor->link = oldcell->link;
		delete oldcell;
	}
}

void EditorBuffer::moveCursorForward() {
	if (cursor->link != NULL) {
		cursor = cursor->link;
	}
}

void EditorBuffer::moveCursorToStart() {
	cursor = start;
}

void EditorBuffer::moveCursorBackward() {
	cellT *cp = start;
	if (cursor != start) {
		while (cp->link != cursor) {
			cp = cp->link;
		}
		cursor = cp;
	}
}

void EditorBuffer::moveCursorToEnd() {
	while (cursor->link != NULL) {
		moveCursorForward();
	}
}

void EditorBuffer::display() {
	for (cellT *cp = start->link; cp != NULL; cp = cp->link) {
		cout << ' ' << cp->ch;
	}
	cout << endl;
	for (cellT *cp = start; cp != cursor; cp = cp->link) {
		cout << " ";
	}
	cout << '^' << endl;
}