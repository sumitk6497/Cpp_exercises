#include <iostream>
#include <string>
using namespace std;

class A
{
	string name;
public:
	A() : name("Sumit")
	{}

	A(const string& iname) : name(iname)
	{}

	const string& GetName() const 
	{	
		return name;
	}

};


/* stack
int main()
{
	A *a;
	{
		A a1 = A("Kumar");
		cout<<a1.GetName()<<endl;
		a = &a1;
		cout<<a->GetName()<<endl;
	}
	cout<<a->GetName()<<endl;

	return 0;
} 
*/

int main()
{
	A *a = new A("Kumar");
	cout << a->GetName() << endl;
	cout << (*a).GetName() << endl;
	delete a;

	return 0;
}


