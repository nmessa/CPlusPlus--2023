//If Else Demo 2
//Author: nmessa
//Date: 1/30/2021

#include <iostream>
using namespace std;

int main()
{
	int score;
    cout << "Enter a score (0 - 100): ";
    cin >> score;
    if (score < 0 || score > 100)
        cout << "Invalid score entered" << endl;
    else if (score >= 90)
        cout << "A" << endl;
    else if (score >= 80)
        cout << "B" << endl;
    else if (score >= 70)
        cout << "C";
    else if (score >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;
}