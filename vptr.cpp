#include <iostream>
using namespace std;

class A
{
public:
	virtual void fun();
};

class B
{
public:
	void fun();
};

int main()
{
	int a = sizeof(A), b = sizeof(B);
	
	cout << "sizeof(A) = " << a << "  sizeof(B) = " << b << endl;

	if (a == b) 
		cout << "a == b" << endl;
	else if (a > b) 
		cout << "a > b" << endl;
	else 
		cout << "a < b" << endl;
	
	return 0;
}

