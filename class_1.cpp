#include <iostream>
using namespace std;

class A{
public:
	A(){
		cout<<"Constructor called\n";
	   }
	~A(){
		cout<<"Destructor called\n";
	    }
};

int main(int argc, char const *argv[])
{
	A *a = new A[5];
	delete a;
	return 0;
}

/* OUTPUT

Constructor called
Constructor called
Constructor called
Constructor called
Constructor called
Destructor called
SEGMENTATION  FAULT

The program will result in segmentation fault as we are trying to delete only one pointer variable 
and leaving other variables as it is which will result in segmentation fault i.e. improper handling of memory.

*/
