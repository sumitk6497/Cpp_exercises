#include <iostream>
using namespace std;
 
class Test
{
public:
	Test() 
	{ cout << "Hello from Test() " << endl; }
}a;
 
int main()
{
	cout << "Main Started " << endl;

	return 0;
}

/*
Output is : 
Hello from Test() 
Main Started

There is a global object 'a' which is constructed before the main functions starts, so the constructor for a is called first, then main()' execution begins.
*/
