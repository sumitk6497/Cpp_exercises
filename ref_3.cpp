#include<iostream>
using namespace std;
 
int main()
{
	int x = 10;
	int& ref = x;
	
	cout << "x = " << x << "  ref = " << ref << endl;		//10  10

	ref = 20;
	cout << "x = " << x << "  ref = " << ref << endl;		//20  20
	
	x = 30;
	cout << "x = " << x << "  ref = " << ref << endl;		//30  30

	int y = 15;
	ref = y;
	cout << "x = " << x << "  ref = " << ref << endl;		//15  15

	cout << "&x = " << &x << "  &ref = " << &ref << endl;		//same address will print for both x and ref
	
	return 0;
}
