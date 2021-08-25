#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun() = 0;
};

class Derived: public Base
{
public:
	void fun() { cout << "fun() called" << endl; }
};

int main(void)
{
//	Base b;		//Can't create object of Base class bcz its abstract class
	Derived d;
	d.fun();	//fun() called

	Base *bp = new Derived();
	bp->fun();	//fun() called
	return 0;
}

