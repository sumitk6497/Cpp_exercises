#include <iostream>

using namespace std;

//Returns r-value
int Add(int x, int y) {
	return x + y;
}

//Return l-value
int & Transform(int &x) {
	x *= x;
	return x;
}


void Print(int &x)
{
	cout << "Print(int &) called" << endl;
}
void Print(const int &x)
{
	cout << "Print(const int &) called" << endl;
}
void Print(int &&x)
{
	cout << "Print(int &&) called" << endl;
}

int main()
{
	int x = 5;			//x is lvalue
	int &y = x;			//y is lvalue reference
	int &&z = 11;			//z is rvalue reference
	const int &w = 15;

	int &ref = Transform(x);	//Transform returns lvalue
	int &&rv = Add(4,2);		//Add returns a temporary (rvalue)

	Print(x);			//int &
	Print(y);			//int &
	Print(3);			//int &&
	Print(w);			//const int &

	return 0;
}
