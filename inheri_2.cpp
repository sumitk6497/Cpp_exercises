#include<iostream>
using namespace std;

class Base 
{};

class Derived: public Base 
{};

int main()
{
	Base *bp = new Derived;
//	Derived *dp = new Base;		// ERROR : A Base class pointer/reference can point/refer to a derived class object, but the other way is not possible

	return 0;
}

