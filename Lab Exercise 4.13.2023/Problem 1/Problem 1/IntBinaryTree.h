// IntBinaryTree.h
// Author: nmessa
// Date: 4.10.2008
// Class definition file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree
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
		IntBinaryTree();		// Constructor
		~IntBinaryTree();	// Destructor
		void insertNode(int);
		bool searchNode(int);
		void remove(int);
		void displayInOrder();
		void displayPreOrder();
		void displayPostOrder();
};

#endif
