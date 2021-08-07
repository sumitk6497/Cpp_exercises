#include <iostream>
using namespace std;

int main()
{
	int *a = new int;			//allocate memory
	*a = 5;					//initialization
	cout << *a << "   " << a << endl;	//print value and address	5 0xaddress
	delete a;				//deallocate memory but still its a dangling pointer now
	cout << *a << "   " << a << endl;	//hold address			0 0xaddress
	a = nullptr;				//NULL pointer, no more dangling pointer now
//	cout << *a << "   " << a << endl;	//segmentation fault bcz trying to print unknown memory address



	int *b = new int(12);			//allocatation & initialization
	cout << *b << "   " << b << endl;	//print value and address	12 0xaddress
	delete b;				//deallocate memory but still its a dangling pointer now
	b = nullptr;

	return 0;
}
