//Demo use of template function
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

//Template function prototype
template <class T>
T operate(T, T, char);

int main()
{
	int a = 32, b = 7;
	//double a = 57.3, b = 12.8;
	//char a = 'A', b = 'B';
	//string a = "A", b = "B";
	char ch = '-';
	cout << a << ch << b << " = " << operate(a, b, ch) << endl;
	return 0;
}

template <class T>
T operate(T x, T y, char c)
{
	switch (c)
	{
		case '+': return x + y;
		case '-': return x - y;
		case '*': return x * y;
		case '/': return x / y;
	}
}
