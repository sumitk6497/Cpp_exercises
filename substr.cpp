#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	string s = "git:hub";
	string s1 = "c++ programming";

	//Find position of ':' using find()
	int pos = s.find(":");

	// Copy substring after pos
	string sub = s.substr(pos + 1);

	// prints the result
	cout << "Sub-string is : " << sub << endl;

	string sub1 = s1.substr(4,14);
	cout << "Sub-string is : " << sub1 << endl;

	return 0;
}

