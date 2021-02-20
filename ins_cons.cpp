#include <iostream>
#include <string>
using namespace std;

class E
{
public :
	E()
	{ cout<<"const created with 0 para"<<endl; }

	E(int x)
	{ cout<<"const created with "<<x<<endl; }


};

class A
{
	string name;
	E e;
public:
	A() : name("Sumit"), e(E(5))
	{
//		E e;
//		e = E(5);
	}

	A(const string& iname)
	{  name = iname; }

	const string& GetName() const 
	{
		return name;
	}

};

int main()
{
	A a;
	cout<<a.GetName()<<endl;
	A a1("Kumar");
	cout<<a1.GetName()<<endl;

	return 0;
}
