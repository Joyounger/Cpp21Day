#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> DynArrNums(3);

	DynArrNums[0] = 365;
	DynArrNums[1] = -421;
	DynArrNums[2] = 789;

	cout << "num of integers in array: " << DynArrNums.size() << endl;
	cout << "enter another number for the array" << endl;

	int AnotherNum = 0;
	cin >> AnotherNum;
	DynArrNums.push_back(AnotherNum);

	cout << "num of integers in array: " << DynArrNums.size() << endl;
	cout << "last element in array:  " << DynArrNums[DynArrNums.size()-1] << endl;


	return 0;
}


/*
$ ./4-4
num of integers in array: 3
enter another number for the array
45
num of integers in array: 4
last element in array:  45
*/