#include<iostream>
using namespace std;
 
class Test
{
    static int x;
    int *ptr;
    int y;
};
 
int main()
{
	Test t;
	cout << "sizeof(t) = " << sizeof(t) << endl;			//16
	cout << "sizeof(Test *) = " << sizeof(Test *) << endl;		//8

	return 0;
}

/*
For a compiler(64-bit) where pointers take 8 bytes, the statement "sizeof(Test *)" returns 8 (size of the pointer ptr). 
The statement "sizeof(t)" returns 16. Since static is not associated with each object of the class, we get (16 not 24).
*/
