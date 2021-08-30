#include<iostream>
using namespace std;

int fun(int x, int y = 0, int z = 0)
{ 
	return (x + y + z); 
}

/*
int fun1(int x = 0, int y = 0, int z)
{ 
	return (x + y + z); 
}

	error: default argument missing for parameter 3 of ‘int fun1(int, int, int)’
   10 | int fun1(int x = 0, int y = 0, int z)
      |                                ~~~~^

*/

int main()
{
	cout << fun(10);	// 10
//	cout << fun1(10);	// ERROR : All default arguments must be the rightmost arguments. 

	cout << endl;
	return 0;
}

