#include <iostream>
using namespace std;

class A
{
public :
	virtual void f1()
	{ cout << "A : f1" << endl; }
};

class B : public A
{
public :
	virtual void f2()
	{ cout << "B : f2" << endl; }
};

class C : public B
{
public :
	virtual void f3()
	{ cout << "C : f3" << endl; }
};


int main()
{
	A *a = new A();
	a->f1();			//A : f1

	cout << "--------------------------------------" << endl;

	B *b = new B();
	b->f1();			//A : f1
	b->f2();			//B : f2

	cout << "--------------------------------------" << endl;

	C *c = new C();
	c->f1();			//A : f1
	c->f2();			//B : f2
	c->f3();			//C : f3

	return 0;
}



