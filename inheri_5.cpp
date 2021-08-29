#include<iostream>
using namespace std;

class Base1
{
public:
	char c = 'a';
};

class Base2
{
public:
	int c = 5;
};

class Derived: public Base1, public Base2
{
public:
	void show() 
	{ 
//		cout << c << endl; 	//ERROR : The variable 'c' is present in both super classes of Derived. So the access to 'c' is ambiguous. 
		cout << Base2::c << endl;
	}
};

int main()
{
	Derived d;
	d.show(); 		//5

	return 0;
}

