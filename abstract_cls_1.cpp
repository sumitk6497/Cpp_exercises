#include<iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};
 
class Derived : public Base 
{ };
 
int main(void)
{
	Derived q;	//ERROR : If we don't override the pure virtual function in derived class, then derived class also becomes abstract class.
    
	return 0;
}
