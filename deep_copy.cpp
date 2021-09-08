#include <iostream>
using namespace std;

class A
{
	int a, b, *p;
public :
	A()
	{ p = new int; }

	A(const A &obj)
	{
	    a = obj.a;
	    b = obj.b;
	    p = new int;
	    *p = *(obj.p);
	}

	void getData(int x, int y, int z)
	{
	    a = x;
	    b = y;
	    *p = z;
	}

	void showData()
	{
	    cout << "a = " << a << "  b = " << b << "  *p = " << *p << endl;
	}

	~A()
	{
	    delete p;
	    cout << "Destructor called\n";
	}

};

int main()
{
	A obj1;
	obj1.getData(10,20,30);
	obj1.showData();

	A obj2 = obj1;
	obj2.showData();

	return 0;
}
