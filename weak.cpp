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
	weak_ptr<Ent> ent1;
	cout << "start" << endl;
	{
//	  shared_ptr<Ent> ent(new Ent());
	  shared_ptr<Ent> ent = make_shared<Ent>();
	  //shared_ptr<Ent> ent0 = ent;
	  ent1 = ent;
	  cout<< "end" << endl;
	}
	cout << "out" << endl;
	return 0;
}
