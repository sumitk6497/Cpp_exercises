#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 5, y = 10;

	cout << "Before swap : ";
	cout << "x = " << x << "  y = " << y << endl;		//5  10

	swap(x, y);

	cout << "After swap : ";
	cout << "x = " << x << "  y = " << y << endl;		//10  5

	return 0;
}
