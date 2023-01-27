//For Loop Demo 3
//Author: nmessa
//Date: 1/30/2021

#include <iostream>
using namespace std;

int main()
{
	int count;
	for (count = 1; count <= 10; count++)
	{
		if (count % 5 == 0)
		{
			break;
		}
		cout << count << endl;
	}
	return 0;
}