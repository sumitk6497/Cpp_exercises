#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	void *p = &n;
	int *pi = static_cast<int*>(p);		//Tpe casting from void to int, so it prints 5.

	cout << *pi << endl;			//5

	return 0;
}
