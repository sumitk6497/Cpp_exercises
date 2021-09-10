#include<iostream>
using namespace std;

class Base
{
public:
	virtual void show() = 0;
};

int main(void)
{
//	Base b;			//ERROR : can't create object of Abstract Class
	Base *bp;

	return 0;
}

