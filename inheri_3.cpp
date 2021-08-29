#include<iostream>
using namespace std;

class Base
{
public:
	void show()
	{
		cout<<"In Base " << endl;
	}
};

class Derived: public Base
{
public:
	int x;
	Derived()
	{ x = 10; }

	void show()
	{
		cout<<"In Derived " << endl;
	}
};

int main()
{
	Base *bp, b;
	Derived d;
	bp = &d;
	bp->show();		//In Base
//	cout << bp->x; 			//ERROR : A base class pointer can point to a derived class object, but we can only access base class member or virtual functions using the base class pointer.
	
	b.show();		//In Base
	d.show();		//In Derived

	cout << d.x << endl;
	
	return 0;
}

