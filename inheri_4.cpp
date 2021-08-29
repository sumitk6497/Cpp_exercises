#include<iostream>
using namespace std;

class Base
{
public:
	void fun() 
	{ cout << "Base::fun() called" << endl; }
	
	void fun(int i) 
	{ cout << "Base::fun(int i) called" << endl; }
};

class Derived: public Base
{
public:
	void fun() 
	{ cout << "Derived::fun() called" << endl; }
};

int main()
{
	Derived d;
	d.fun(5);		//ERROR : If a derived class writes its own method, then all functions of base class with same name become hidden, even if signaures of base class functions are different. In the above question, when fun() is rewritten in Derived, it hides both fun() and fun(int) of base class.

	return 0;
}


/*
inheri_4.cpp: In function ‘int main()’:
inheri_4.cpp:24:9: error: no matching function for call to ‘Derived::fun(int)’
   24 |  d.fun(5);  //ERROR : If a derived class writes its own method, then all functions of base class with same name become hidden, even if signaures of base class functions are different. In the above question, when fun() is rewritten in Derived, it hides both fun() and fun(int) of base class.
      |         ^
inheri_4.cpp:17:7: note: candidate: ‘void Derived::fun()’
   17 |  void fun()
      |       ^~~
inheri_4.cpp:17:7: note:   candidate expects 0 arguments, 1 provided

*/
