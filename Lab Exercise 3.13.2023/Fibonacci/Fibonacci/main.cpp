//Lab Exercise 3/13/2023 Problem 3
//Author: 

#include <iostream>
#include <cmath>
using namespace std;

long long int fibonacci(int);

int main()
{
	int number;
	/*cout << "Which Finonacci number do you wish? ";
	cin >> number;*/
	//Test numbers from 0 to 99 and see where the value goes negative
	//Negative means the value overflowed into the sign bit
	for (number = 0; number < 100; number++)
	{
		cout << "The " << number << "th Fibonacci number is "<< fibonacci(number) << endl;
	}
	return 0;
}

long long int fibonacci(int n)
{
	//Declare variables
	double value1, value2;
	long long int answer;


	//Add code here


	return answer;
}

//Output
//The 0th Fibonacci number is 0
//The 1th Fibonacci number is 1
//The 2th Fibonacci number is 1
//The 3th Fibonacci number is 2
//The 4th Fibonacci number is 3
//The 5th Fibonacci number is 5
//The 6th Fibonacci number is 8
//The 7th Fibonacci number is 13
//The 8th Fibonacci number is 21
//The 9th Fibonacci number is 34
//The 10th Fibonacci number is 54
//The 11th Fibonacci number is 89
//The 12th Fibonacci number is 143
//The 13th Fibonacci number is 232
//The 14th Fibonacci number is 377
//The 15th Fibonacci number is 610
//The 16th Fibonacci number is 986
//The 17th Fibonacci number is 1596
//The 18th Fibonacci number is 2584
//The 19th Fibonacci number is 4181
//The 20th Fibonacci number is 6764
//The 21th Fibonacci number is 10945
//The 22th Fibonacci number is 17710
//The 23th Fibonacci number is 28656
//The 24th Fibonacci number is 46367
//The 25th Fibonacci number is 75025
//The 26th Fibonacci number is 121392
//The 27th Fibonacci number is 196418
//The 28th Fibonacci number is 317811
//The 29th Fibonacci number is 514228
//The 30th Fibonacci number is 832039
//The 31th Fibonacci number is 1346268
//The 32th Fibonacci number is 2178309
//The 33th Fibonacci number is 3524577
//The 34th Fibonacci number is 5702886
//The 35th Fibonacci number is 9227465
//The 36th Fibonacci number is 14930351
//The 37th Fibonacci number is 24157816
//The 38th Fibonacci number is 39088168
//The 39th Fibonacci number is 63245985
//The 40th Fibonacci number is 102334154
//The 41th Fibonacci number is 165580140
//The 42th Fibonacci number is 267914295
//The 43th Fibonacci number is 433494437
//The 44th Fibonacci number is 701408732
//The 45th Fibonacci number is 1134903169
//The 46th Fibonacci number is 1836311903
//The 47th Fibonacci number is 2971215072
//The 48th Fibonacci number is 4807526975
//The 49th Fibonacci number is 7778742048
//The 50th Fibonacci number is 12586269024
//The 51th Fibonacci number is 20365011074
//The 52th Fibonacci number is 32951280098
//The 53th Fibonacci number is 53316291172
//The 54th Fibonacci number is 86267571271
//The 55th Fibonacci number is 139583862444
//The 56th Fibonacci number is 225851433716
//The 57th Fibonacci number is 365435296161
//The 58th Fibonacci number is 591286729878
//The 59th Fibonacci number is 956722026040
//The 60th Fibonacci number is 1548008755919
//The 61th Fibonacci number is 2504730781960
//The 62th Fibonacci number is 4052739537880
//The 63th Fibonacci number is 6557470319841
//The 64th Fibonacci number is 10610209857722
//The 65th Fibonacci number is 17167680177564
//The 66th Fibonacci number is 27777890035287
//The 67th Fibonacci number is 44945570212852
//The 68th Fibonacci number is 72723460248140
//The 69th Fibonacci number is 117669030460993
//The 70th Fibonacci number is 190392490709134
//The 71th Fibonacci number is 308061521170129
//The 72th Fibonacci number is 498454011879263
//The 73th Fibonacci number is 806515533049392
//The 74th Fibonacci number is 1304969544928656
//The 75th Fibonacci number is 2111485077978049
//The 76th Fibonacci number is 3416454622906706
//The 77th Fibonacci number is 5527939700884755
//The 78th Fibonacci number is 8944394323791463
//The 79th Fibonacci number is 14472334024676218
//The 80th Fibonacci number is 23416728348467676
//The 81th Fibonacci number is 37889062373143896
//The 82th Fibonacci number is 61305790721611584
//The 83th Fibonacci number is 99194853094755488
//The 84th Fibonacci number is 160500643816367040
//The 85th Fibonacci number is 259695496911122528
//The 86th Fibonacci number is 420196140727489600
//The 87th Fibonacci number is 679891637638612096
//The 88th Fibonacci number is 1100087778366101632
//The 89th Fibonacci number is 1779979416004713728
//The 90th Fibonacci number is 2880067194370815488
//The 91th Fibonacci number is 4660046610375529472
//The 92th Fibonacci number is 7540113804746344448
//The 93th Fibonacci number is -9223372036854775808
//The 94th Fibonacci number is -9223372036854775808
//The 95th Fibonacci number is -9223372036854775808
//The 96th Fibonacci number is -9223372036854775808
//The 97th Fibonacci number is -9223372036854775808
//The 98th Fibonacci number is -9223372036854775808
//The 99th Fibonacci number is -9223372036854775808