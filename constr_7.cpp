#include<iostream>
using namespace std;
  
class Test
{
public:
	Test();
};
  
Test::Test()  
{
	cout << "Constructor Called." << endl;
}
  
void fun() 
{
	static Test t1;
}
  
int main() 
{
	cout << "Before fun() called." << endl;
	fun();
	fun();
	cout << "After fun() called." << endl;
	
	return 0;
}

/*
Output :
Before fun() called.
Constructor called.
After fun() called.

Object t is static in fun(), so constructor is called only once.
*/
