#include<iostream>
using namespace std;
 
int main()
{
	int x = 10;
	int& ref = x;
	
	ref = 20;
	cout << "x = " << x << endl;		//20
	
	x = 30;
	cout << "ref = " << ref << endl;	//30

	return 0;
}
