/*
	Implementation of Binary Trees
*/

#include <iostream>
#include <string>
#include "Chapter_13_Trees\HeaderFiles\BinaryTree.h"

using namespace std;

int main() {
	BinaryTree binaryTree;
	Node *node = NULL;
	binaryTree.insertNode(node, "9");
	binaryTree.insertNode(node, "6");
	binaryTree.insertNode(node, "4");
	binaryTree.insertNode(node, "8");
	binaryTree.insertNode(node, "2");
	binaryTree.insertNode(node, "3");
	binaryTree.insertNode(node, "7");
	cout << "Display InOrder Traversal" << endl;
	binaryTree.displayTree(node);
	cout << endl;
	cout << endl;
	cout << "Display PreOrder Traversal" << endl;
	binaryTree.preOrderDisplay(node);
	cout << endl;
	cout << endl;
	cout << "Display PostOrder Traversal" << endl;
	binaryTree.postOrderDisplay(node);
	cout << endl;

}