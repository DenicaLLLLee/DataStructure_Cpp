#include <iostream>
#include <string>
#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

Node * BinaryTree::findNode(Node * root, std::string key)
{
	if (root == NULL) return NULL;
	if (key == root->key) return root;
	if (key < root->key) {
		findNode(root->left, key);
	}
	else {
		findNode(root->right, key);
	}
}

void BinaryTree::insertNode(Node *& root, std::string key)
{
	if (root == NULL) {
		root = new Node;
		root->key = key;
		root->left = root->right = NULL;
	}
	else if (root->key == key) return;
	else if (key < root->key) {
		insertNode(root->left, key);
	}
	else {
		insertNode(root->right, key);
	}
}

void BinaryTree::displayTree(Node *root) {
	if (root != NULL) {
		displayTree(root->left);
		std::cout << root->key << "->";
		displayTree(root->right);
	}
}

void BinaryTree::preOrderDisplay(Node * root)
{
	if (root != NULL) {
		std::cout << root->key << "->";
		displayTree(root->left);
		displayTree(root->right);
	}
}

void BinaryTree::postOrderDisplay(Node * root)
{
	if (root != NULL) {
		displayTree(root->left);
		displayTree(root->right);
		std::cout << root->key << "->";
	}
}
