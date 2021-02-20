#include <iostream>
using namespace std;

class Ent
{
public :
	Ent()
	{ cout << "Obj cretaed !!!!!! " << endl; }

	~Ent()
	{ cout << "Obj destoryed !!!!!! " << endl; }
};

class scopePtr
{
	Ent *ptr;
public :
	scopePtr(Ent *mptr) : ptr(mptr)
	{}

	~scopePtr()
	{ delete ptr; }

};

int main()
{
	{
	  cout << "before" << endl;
	  scopePtr a =new Ent();
	  cout << "after" << endl;
	}
	cout << "end" << endl;
	return 0;
}
