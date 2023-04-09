// BinaryTree.h
//Class Definition File for BinaryTree class
//Author: 
//Date: 4/15/2022

#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree
{
	private:
		struct TreeNode
		{
			int value;
			TreeNode *left;
			TreeNode *right;
		};

		TreeNode *root;
		void insert(TreeNode *&, TreeNode *&);
		void destroySubTree(TreeNode *);
		void deleteNode(int, TreeNode *&);
		void makeDeletion(TreeNode *&);
		void displayInOrder(TreeNode *);
		void displayPreOrder(TreeNode *);
		void displayPostOrder(TreeNode *);
	public:
		BinaryTree();		// Constructor
		~BinaryTree();	// Destructor
		void insertNode(int);
		bool searchNode(int);
		void remove(int);
		void displayInOrder();
		void displayPreOrder();
		void displayPostOrder();
};
#include "BinaryTree.cpp"
#endif
