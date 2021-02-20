#include <iostream>
using namespace std;

class base
{
public :
	base() 
	{ cout << "Constructor called" << endl; }

	~base()
	{ cout << "destructor called" << endl; }
};

int main()
{
    base obj;
    return 0;
}
	
