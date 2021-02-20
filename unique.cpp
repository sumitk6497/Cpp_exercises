#include <iostream>
#include <memory>
using namespace std;

class Ent
{
public :
	Ent()
	{ cout << "Obj cretaed !!!!!! " << endl; }

	~Ent()
	{ cout << "Obj destoryed !!!!!! " << endl; }

	void print() {}
};

int main()
{
	{
//	  unique_ptr<Ent> ent(new Ent());
	  unique_ptr<Ent> ent = make_unique<Ent>();
//	  unique_ptr<Ent> ent0 = ent;
	  ent->print();
	}
	return 0;
}
