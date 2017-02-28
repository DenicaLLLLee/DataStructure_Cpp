#include <string>
#include "AVLTree.h"

#ifdef __avltree_h__
AVLTree::AVLTree()
{
}

AVLTree::~AVLTree()
{
}

int AVLTree::InsertAVL(Node *& t, std::string key)
{
	if (t == NULL) {
		t = new Node;
		t->key = key;
		t->right = t->left = NULL;
		t->bf = 0;
		return +1;
	}
	if (key == t->key) return 0;
	if (key < t->key) {
		int delta = InsertAVL(t->left, key);
		if (delta == 0) return 0;
		switch (t->bf) {
			case +1: t->bf = 0; return 0;
			case 0: t->bf = -1; return +1;
			case -1: FixLeftImbalance(t); return 0;
		}
	}
	else {
		int delta = InsertAVL(t->right, key);
		if (delta == 0) return 0;
		switch (t->bf) {
		case -1: t->bf = 0; return 0;
		case 0: t->bf = +1; return +1;
		case +1: FixRightImbalance(t); return 0;
		}
	}
}

void AVLTree::InsertNode(Node * & t, std::string key)
{
	InsertAVL(t, key);
}

void AVLTree::FixLeftImbalance(Node *& t)
{
	Node *child = t->left;
	if (child->bf != t->bf) {
		int oldBF = child->right->bf;
		RotateLeft(t->left);
		RotateRight(t);
		t->bf = 0;
		switch (oldBF) {
		case -1: t->left->bf = 0; t->right->bf = +1; break;
		case 0: t->left->bf = t->right->bf = 0; break;
		case +1: t->left->bf = -1; t->right->bf = 0; break;
		}
	}
	else {
		RotateRight(t);
		t->right->bf = t->bf = 0;
	}
}

void AVLTree::RotateLeft(Node *& t)
{
	Node *child = t->right;
	t->right = child->left;
	child->left = t;
	t = child;
}

void AVLTree::FixRightImbalance(Node *& t)
{
}

void AVLTree::RotateRight(Node *& t)
{
	Node *child = t->left;
}

#endif // __avltree_h__

