#include <iostream>
using namespace std;

#define N 100

int main()
{
	char buff[N];

	cout << "Enter your name : ";
	cin.getline(buff,75,'\n');

	cout << "Your name is : " << buff << endl;

	return 0;
}
