#include <iostream>
using namespace std;

class Test {
private:
	~Test() {}
};

/*
int main()
{ }			//No issue bcz we didn't create object of Test class
*/


/*
int main()
{
	Test t;		//Compile time error, object 't' can't be destructed bcz destructor is private
}
*/


int main()
{
	Test *t;	//No issue bcz we just create pointer of Test class
}
