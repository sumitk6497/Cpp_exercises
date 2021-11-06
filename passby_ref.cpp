#include <iostream>
using namespace std;

void square(int *x, int *y)
{
	*x = (*x) * --(*y);
}

int main()
{
	int number;

	cout << "Enter a number : ";
	cin >> number;
	
	square(&number, &number);
	cout << number << endl;
	
	return 0;
}

/*
As we are passing value by reference therefore the change in the value is reflected back to the passed variable number 
hence value of number is changed to x * (x-1).

If x = 5, number = 5 * 4 = 20;

*/
