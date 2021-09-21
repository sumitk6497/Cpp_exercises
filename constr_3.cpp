#include<iostream>
#include<stdlib.h>
using namespace std;
 
class Test
{
public:
	Test()
	{ cout << "Constructor called" << endl; }
};
 
int main()
{
	cout << "malloc object" << endl;
	Test *t = (Test *)malloc(sizeof(Test));
	cout << "new object" << endl;
	Test *t1 = new Test();

	return 0;
}

/*
Unlike new, malloc() doesn't call constructor. If we replace malloc() with new, the constructor is called.
*/
