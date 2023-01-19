//Switch Demo
//Author: nmessa
//Date: 1/30/2021

#include <iostream>
using namespace std;

int main()
{
	int score;
    cout << "Enter a test score (1 - 100): ";
    cin >> score;
            
    if (score < 0 || score > 100)
    {
        cout << "Invalid score entered" << endl;
        return 0;
    }

    score = score / 10;
    switch (score)
    {
        case 10:
            cout << "A" << endl;
            break;
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
            //break;
    }

	return 0;
}