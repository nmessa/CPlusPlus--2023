//Lab Exercise 4.14.2023
//Author: nmessa

#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
	IntBinaryTree tree;

	cout << "Inserting nodes.\n";
	tree.insertNode(57);
	tree.insertNode(83);
	tree.insertNode(32);
	tree.insertNode(42);
	tree.insertNode(29);
	tree.insertNode(27);
	tree.insertNode(12);
	tree.insertNode(9);
	tree.insertNode(59);
	tree.insertNode(69);
	tree.insertNode(79);
	tree.insertNode(65);
	tree.insertNode(23);
	tree.insertNode(62);

	cout << "Here are the values in the tree:\n";
	tree.displayInOrder();

	cout << "Total sum of tree elements: " << tree.sumTree() << endl;
	cout << "Total number of nodes: " << tree.treeCount() << endl;
	
	return 0;
}

//Inserting nodes.
//Here are the values in the tree:
//9  Leaf
//12  Not a Leaf
//23  Leaf
//27  Not a Leaf
//29  Not a Leaf
//32  Not a Leaf
//42  Leaf
//57  Not a Leaf
//59  Not a Leaf
//62  Leaf
//65  Not a Leaf
//69  Not a Leaf
//79  Leaf
//83  Not a Leaf
//Total sum of tree elements: 648
//Total number of nodes: 14
