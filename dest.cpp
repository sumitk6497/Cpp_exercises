#include <iostream>
using namespace std;

class base
{
public :
	base() 
	{ cout << "base Constructor called" << endl; }

	virtual ~base()
	{ cout << "base destructor called" << endl; }
};

class child: public base
{
public :
	child() 
	{ cout << "Child Constructor called" << endl; }

	~child()
	{ cout << "Child destructor called" << endl; }
};

int main()
{
    base *B = new base();
    delete B;
    cout << "-------------------------------\n";
    child *C = new child();
    delete C;
    cout << "-------------------------------\n";
    base *Poly = new child();
    delete Poly;
    return 0;
}
	
