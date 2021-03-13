#include <iostream>
using namespace std;

class base
{
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

/* If we put places constructor or destructor as private, we can't create object of that class and get error while compilation */

/*
no_obj.cpp: In function ‘int main()’:
no_obj.cpp:15:10: error: ‘base::base()’ is private within this context
   15 |     base obj;
      |          ^~~
no_obj.cpp:6:2: note: declared private here
    6 |  base()
      |  ^~~~
no_obj.cpp:15:10: error: ‘base::~base()’ is private within this context
   15 |     base obj;
      |          ^~~
no_obj.cpp:9:2: note: declared private here
    9 |  ~base()
      |  ^
*/
