#include<iostream>
using namespace std;

int x = 1;

void fun()
{
	int x = 2;
	{
		int x = 3;
		cout << ::x << endl;
	}
}

int main()
{
	fun();			//1 : The value of ::x is 1. The scope resolution operator when used with a variable name, always refers to global variable.
	
	return 0;
}
