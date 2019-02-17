#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string Greetings ("Hello std::string");
	cout << Greetings << endl;

	cout << "enter a line of text: " << endl;
	string FirstLine;
	getline(cin, FirstLine);

	cout << "enter another: " << endl;
	string SecLine;
	getline(cin, SecLine);

	cout << "result of concatenation: " << endl;
	string Concat = FirstLine + " " + SecLine;
	cout << Concat << endl;

	cout << "copy of cpncatenated string: " << endl;
	string Copy;
	Copy = Concat;
	cout << Copy << endl;	



	return 0;
}