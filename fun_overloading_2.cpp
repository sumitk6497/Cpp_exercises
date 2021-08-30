#include <iostream>
using namespace std;

int fun(int=0, int = 0);

int main()
{
	cout << fun(5) << endl;

	return 0;
}

int fun(int x, int y) 
{ 
	return (x+y); 
}

/*
The statement "int fun(int=0, int=0)" is declaration of a function that takes two arguments with default values as 0 and 0. The last statement is definition of fun(). When we make a call fun(5), x gets the value 5 and y gets 0. So the returned value is 5.
*/
