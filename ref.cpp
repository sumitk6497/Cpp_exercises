#include<iostream>
using namespace std;

int main()
{
	const int x = 10;
	const int& ref = x;

	cout << ref << endl;

//	ref = 20;		//ERROR : bcz of const

	cout << ref << " x = " << x << endl;
	return 0;
}
