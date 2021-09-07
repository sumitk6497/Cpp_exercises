#include<iostream>
#include<stdlib.h>
using namespace std;

template<class T, class U>
class A {
	T x;
	U y;
	static int count;
};

int main() 
{
	A<char, char> a;
	A<int, int> b;
	A<int, char> c;

	cout << sizeof(a) << endl;	//2
	cout << sizeof(b) << endl;	//8
	cout << sizeof(c) << endl;	//8

	return 0;
}

