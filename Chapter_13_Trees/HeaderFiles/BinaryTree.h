#pragma once

struct Node {
	std::string key;
	Node *left, *right;
};


class BinaryTree
{
private:
	Node *head = NULL;

public:
	BinaryTree();
	~BinaryTree();
	Node *findNode(Node *root, std::string key);
	void insertNode(Node * &root, std::string key);
	void displayTree(Node *root);
	void preOrderDisplay(Node *root);
	void postOrderDisplay(Node *root);
	void breadthFirstSearch(Node *root);
};

