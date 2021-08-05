#include<iostream>
#include<limits.h> // for int,char macros
#include<float.h> // for float,double macros

using namespace std;

int main()
{
	// Displaying ranges with the help of macros
	cout << "char ranges from : " << CHAR_MIN << " to " << CHAR_MAX << endl;
	cout << "short char ranges from : " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
	cout << "unsigned char ranges from : " << 0 << " to " << UCHAR_MAX << endl;

	cout << "\nshort int ranges from : " << SHRT_MIN << " to " << SHRT_MAX << endl;
	cout << "unsigned short int ranges from : " << 0 << " to " << USHRT_MAX << endl;
	cout << "int ranges from : " << INT_MIN << " to " << INT_MAX << endl;
	cout << "unsigned int ranges from : " << 0 << " to " << UINT_MAX << endl;
	cout << "long int ranges from : " << LONG_MIN << " to " << LONG_MAX << endl;
	cout << "unsigned long int ranges from : " << 0 << " to " << ULONG_MAX << endl;
	cout << "long long int ranges from : " << LLONG_MIN << " to " << LLONG_MAX << endl;
	cout << "unsigned long long int ranges from : " << 0 << " to " << ULLONG_MAX << endl;

	cout << "\nfloat ranges from : " << FLT_MIN << " to " << FLT_MAX << endl;
	cout << "negative float ranges from : " << -FLT_MIN << " to " << -FLT_MAX << endl;
	cout << "double ranges from : " << DBL_MIN << " to " << DBL_MAX << endl;
	cout << "negative double ranges from : " << -DBL_MIN << " to " << +DBL_MAX << endl;

	return 0;
}

/******* OUTPUT

char ranges from : -128 to 127
short char ranges from : -128 to 127
unsigned char ranges from : 0 to 255

short int ranges from : -32768 to 32767
unsigned short int ranges from : 0 to 65535
int ranges from : -2147483648 to 2147483647
unsigned int ranges from : 0 to 4294967295
long int ranges from : -9223372036854775808 to 9223372036854775807
unsigned long int ranges from : 0 to 18446744073709551615
long long int ranges from : -9223372036854775808 to 9223372036854775807
unsigned long long int ranges from : 0 to 18446744073709551615


float ranges from : 1.17549e-38 to 3.40282e+38
negative float ranges from : -1.17549e-38 to -3.40282e+38
double ranges from : 2.22507e-308 to 1.79769e+308
negative double ranges from : -2.22507e-308 to 1.79769e+308

********/

