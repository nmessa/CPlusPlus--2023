// This program uses the << operator to write information to a file.
#include <iostream>
#include <fstream> // Needed to use files
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("demofile.txt");

	cout << "Now writing information to the file.\n";
	// Write 3 great names to the file
	outputFile << "Bach\n";
	outputFile << "Beethoven\n";
	outputFile << "Mozart\n";

	// Close the file
	outputFile.close();
	cout << "Done.\n";
	return 0;
}
