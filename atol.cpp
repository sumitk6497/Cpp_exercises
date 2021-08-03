// CPP program to see working of atol() function.
#include <iostream>

using namespace std;

int main()
{
	char str1[] = "5672345";

	// Function calling to convert to a long int
	long int num1 = atol(str1);

	cout << "Number is " << num1 << "\n";		//5672345

	char str2[] = "10000002 05";

	long int num2 = atol(str2);			//10000002

	cout << "Number is " << num2 << "\n";
	return 0;
}

