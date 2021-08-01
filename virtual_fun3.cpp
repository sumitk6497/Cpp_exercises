#include <iostream>
using namespace std;

class A
{
public :
	virtual void f1()
	{ cout << "A : f1" << endl; }
	
	void f2()
	{ cout << "A : f2" << endl; }
};

class B : public A
{
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
	a->f2();			//A : f2

	cout << "--------------------------------------" << endl;

	B *b = new B();
	b->f1();			//A : f1
	b->f2();			//A : f2

	cout << "--------------------------------------" << endl;

	C *c = new C();
	c->f1();			//A : f1
	c->f2();			//A : f2
	c->f3();			//C : f3

	cout << "--------------------------------------" << endl;

	A *c1 = new C();
	c1->f1();			//A : f1
	c1->f2();			//A : f2
//	c1->f3();			//ERROR : compiler do early binding. f3() is not member function of class A


	return 0;
}



