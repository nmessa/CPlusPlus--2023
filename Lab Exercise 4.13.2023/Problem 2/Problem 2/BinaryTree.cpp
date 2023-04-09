// BinaryTree.cpp
// Implementation file for the BinaryTree class
// Author: 
// Date: 4.15.2022

#include <iostream>
#include "BinaryTree.h"
using namespace std;


BinaryTree::BinaryTree()		// Constructor
{ 
	root = NULL; 
}


BinaryTree::~BinaryTree()	// Destructor
{ 
	destroySubTree(root); 
}

//*************************************************************
// insert accepts a TreeNode pointer and a pointer to a node. *
// The function inserts the node into the tree pointed to by  *
// the TreeNode pointer. This function is called recursively. *
//*************************************************************
void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if (nodePtr == NULL)
		nodePtr = newNode;						// Insert the node.
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);			// Search the left branch
	else 
		insert(nodePtr->right, newNode);		// Search the right branch
}


//**********************************************************
// insertNode creates a new node to hold num as its value, *
// and passes it to the insert function.                   *
//**********************************************************
void BinaryTree::insertNode(int val)
{
	TreeNode *newNode;		// Pointer to a new node.

	// Create a new node and store num in it.
	newNode = new TreeNode;
	newNode->value = val;
	newNode->left = newNode->right = NULL;
	// Insert the node.
	insert(root, newNode);
}

//***************************************************
// destroySubTree is called by the destructor. It   *
// deletes all nodes in the tree.                   *
//***************************************************
void BinaryTree::destroySubTree(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}

//***************************************************
// searchNode determines if a value is present in   *
// the tree. If so, the function returns true.      *
// Otherwise, it returns false.                     *
//***************************************************
bool BinaryTree::searchNode(int val)
{
	TreeNode *nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == val)
			return true;
		else if (val < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}

//**********************************************
// remove calls deleteNode to delete the       *
// node whose value member is the same as num. *
//**********************************************
void BinaryTree::remove(int val)
{
	deleteNode(val, root);
}

//********************************************
// deleteNode deletes the node whose value   *
// member is the same as num.                *
//********************************************
void BinaryTree::deleteNode(int val, TreeNode *&nodePtr)
{
	if (val < nodePtr->value)
		deleteNode(val, nodePtr->left);
	else if (val > nodePtr->value)
		deleteNode(val, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

//***********************************************************
// makeDeletion takes a reference to a pointer to the node  *
// that is to be deleted. The node is removed and the       *
// branches of the tree below the node are reattached.      *
//***********************************************************
void BinaryTree::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr;	// Temporary pointer, used in reattaching the
	                        // left subtree.

	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;	// Reattach the left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;	// Reattach the right child
		delete tempNodePtr;
	}
	// If the node has two children.
	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;
		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

//****************************************************************
// The displayInOrder member function displays the values        *
// in the subtree pointed to by nodePtr, via inorder traversal.  *
//****************************************************************
void BinaryTree::displayInOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPreOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via preorder traversal. *
//****************************************************************
void BinaryTree::displayPreOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);		
		displayPreOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPostOrder member function displays the values      *
// in the subtree pointed to by nodePtr, via postorder traversal.*
//****************************************************************
void BinaryTree::displayPostOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);		
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

// Overloaded display functions that pass the root to their overloaded counterparts
void BinaryTree::displayInOrder()
{	
	cout << "\nThe tree in order " << endl;
	displayInOrder(root); 
}

void BinaryTree::displayPreOrder()
{	
	cout << "\nThe tree pre-order " << endl;
	displayPreOrder(root); 
}

void BinaryTree::displayPostOrder()
{	
	cout << "\nThe tree post-order " << endl;
	displayPostOrder(root); 
}

