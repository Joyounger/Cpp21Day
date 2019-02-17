#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	auto Flag = true;
	auto Number = 250000000000;

	cout << "Flag = " << Flag;
	cout << ", sizeof(Flag) = " << sizeof(Flag) << endl;

	cout << "Number = " << Number;
	cout << ", sizeof(Number) = " << sizeof(Number) << endl;

	return 0;
}


/*
$ g++ 3-5.cpp -o 3-5 -Wall

$ ./3-5.exe
Flag = 1, sizeof(Flag) = 1
Number = 250000000000, sizeof(Number) = 8
*/