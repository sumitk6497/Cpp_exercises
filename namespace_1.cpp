#include <iostream>

using namespace std;

int var1 = 1, var2 = 2;			//global variable

int fun1() { return 1; };

int fun2() { return 2; };

namespace NS 				//named namespace
{
	int var1 = 5, var3 = 7;
	
	int fun1();  
	int fun3() { return 8; };

	int fun1()
	{
	    int var1 = 10;		//block (function) variable

	    cout <<       var1     << endl;		//10  --- local
	    cout <<   NS::var1     << endl;		//5   --- named
	    cout <<     ::var1     << endl;		//1   --- global
	    cout <<     ::fun1()   << endl;		//1   --- global
	    cout <<       var2     << endl;		//2   --- global
	    cout <<       fun2()   << endl;		//2   --- global
	    cout <<       var3     << endl;		//7   --- named
	    cout <<       fun3()   << endl;		//8   --- named

	    return 15;
	}
}

int main()
{
	NS::fun1();

	return 0;
}
