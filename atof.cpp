// CPP program to see working of atof() function.
#include <iostream>

using namespace std;

int main()
{
	char pi[] = "3.14159265";

	// Function calling to convert to a double
	double pi_val = atof(pi);

	cout << "Pi value is " << pi_val << endl;	//3.14.159265

	char acc[] = "9.8 65 123.4";

	double acc_val = atof(acc);			//9.8

	cout << "Acceleration value is " << acc_val << endl;
	return 0;
}

