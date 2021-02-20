#include <iostream>
#include <string>
using namespace std;

class A
{
	int a;
	string name;
public:
	A() : name("Sumit"), a(5)
	{}

	A(const string& iname) : name(iname)
//	{  name = iname; }
	{}
	const string& GetName() 
	{	
		a = 10;
		cout << a << endl;
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
