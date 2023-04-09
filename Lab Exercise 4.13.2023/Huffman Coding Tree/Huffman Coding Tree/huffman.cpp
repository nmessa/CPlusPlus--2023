//Implementation of Huffman class
//Author: nmessa
//This class implements a Huffman coding tree for compression
//Currently recognizes lower case letters and space character
//Huffman coding is stored in codefile.txt and the message to
//be encoded is stored in message.txt.

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#include "huffman.h"

Huffman::Huffman()
{
	myRoot = new BinNode('*');
}

void Huffman::buildDecodingTree(ifstream & codeIn)
{
	char ch;
	string code;
	for(int i = 0;i < 26;i++)
	{
		codeIn >> ch >> code;
		insert(ch, code);   //add code to the decoding tree
		hcodes[i] = code;	//add code to the encoding array
	}
	insert(' ', "111");
	hcodes[26] = "111";
}

void Huffman::insert(char ch, string code)
{
	BinNodePointer p = myRoot;
	for (int i = 0; i < code.length(); i++)
	{
		switch (code[i])
		{
			case '0':  //go left
				if (p->left == NULL)
					p->left = new BinNode('*');
				p = p->left;
				break;
			case '1':	//go right
				if (p->right == NULL)
					p->right = new BinNode('*');
				p = p->right;
				break;
		}
	}
	p -> data = ch;
}

void Huffman::encode(ofstream & messageOut, string myMessage)
{
	for (int i = 0; i < myMessage.length(); i++)
	{
		if (myMessage[i] == ' ')
			messageOut << hcodes[26];
		else
			messageOut << hcodes[myMessage[i] - 97];
	}
	messageOut.close();
}

void Huffman::decode(ifstream & messageIn)
{
	char bit;
	BinNodePointer p;
	for (;;)
	{
		p = myRoot;
		while (p->left != NULL || p->right != NULL)
		{
			messageIn >> bit;
			if (messageIn.eof())
				return;
			cout << bit;
			if (bit == '0')
				p = p->left;
			else
				p = p->right;
		}
		cout << "--" << p->data << endl;
	}
}

void Huffman::printTree(ostream & out, BinNodePointer root, int indent)
{
	if (root != 0)
	{
		printTree(out, root->right, indent+8);
		out << setw(indent) << " " << root->data << endl;
		printTree(out, root->left, indent+8);
	}
}

void Huffman::displayDecodingTree(ostream & out)
{
	printTree(out, myRoot, 0);
}