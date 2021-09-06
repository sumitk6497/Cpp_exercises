#include<iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	Test() { x = 0; }
	void destroy() { delete this; }
	void print() { cout << "x = " << x; }
};

int main()
{
	Test obj;
	obj.destroy();
	obj.print();		//Undefined behavior

	return 0;
}

/*
delete operator works only for objects allocated using operator new.
If the object is created using new, then we can do delete this, otherwise behavior is undefined.
*/
