#pragma once

#ifndef __avltree_h__
#define __avltree_h__
struct Node {
	std::string key;
	Node *left, *right;
	int bf;
};

class AVLTree {
private:
	int InsertAVL(Node * & t, std::string key);

public:
	AVLTree();
	~AVLTree();
	void InsertNode(Node * & t, std::string key);
	void FixLeftImbalance(Node * & t);
	void RotateLeft(Node * & t);
	void FixRightImbalance(Node * & t);
	void RotateRight(Node * & t);
};
#endif // !__avltree_h__

