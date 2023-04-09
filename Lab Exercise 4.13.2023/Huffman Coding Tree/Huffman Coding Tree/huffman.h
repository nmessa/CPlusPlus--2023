#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#ifndef HUFFMAN_H
#define HUFFMAN_H

class Huffman
{
	private:
	struct BinNode
	{
		char data;
		BinNode * left;
		BinNode * right;
		BinNode(char item)
		{
			data = item;
			left = right = NULL;
		}
	};

	typedef BinNode * BinNodePointer;  //This defines a new type BinNodePointer as a pointer to a BinNode

	BinNodePointer myRoot;
	string hcodes[27];
	
public:
	Huffman();
	void buildDecodingTree(ifstream &);
	void insert(char, string);
	void decode(ifstream &);
	void encode(ofstream &, string);
	void printTree(ostream &, BinNodePointer, int);
	void displayDecodingTree(ostream &);
};
#endif