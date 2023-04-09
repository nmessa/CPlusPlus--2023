#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "huffman.h"

int main()
{
	ifstream codestream("codefile.txt");

	Huffman h;
	
	string myMessage, cMessage;
	h.buildDecodingTree(codestream);

	cout << "Enter the message you wish to encode: ";
	getline(cin, myMessage);

	//Encode the message
	ofstream message("message.txt");
	h.encode(message, myMessage);

	//Decode the message
	ifstream message2("message.txt");
	h.decode(message2);

	//Calculate amount of compression
	int original = myMessage.length() * 8;
	ifstream msg("message.txt");
	int compressed;
	getline(msg, cMessage);
	compressed = cMessage.length();
	cout << "Original: " << original << " bits" << endl;
	cout << "Compressed: " << compressed << " bits" << endl;
	cout << "Percent compression: " 
		<< 1.0 * compressed / original * 100 << "%" << endl;
	return 0;
}