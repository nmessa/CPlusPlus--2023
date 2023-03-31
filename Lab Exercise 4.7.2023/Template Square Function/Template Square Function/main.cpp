#include <iostream>
using namespace std;
template<class T>
T square(T);

int main()
{
	double number = 7.93;
	int iNumber = 7;
	cout << square(number) << endl;
	cout << square(iNumber) << endl;
	return 0;
}

template<class T>
T square(T num)
{
	return num * num;
}

//Output
//62.8849
//49
