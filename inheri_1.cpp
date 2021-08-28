#include<iostream>
using namespace std;

class base {
	int arr[10];
};

class b1: public base 
{ };

class b2: public base 
{ };

class derived: public b1, public b2 
{};

int main()
{
	cout << sizeof(derived) << endl;		// 80 : since b1 and b2 both inherit from class base, two copies of class base are there in class derived. 

	return 0;
}

