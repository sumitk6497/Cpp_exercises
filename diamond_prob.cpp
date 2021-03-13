#include <iostream>

class A
{
public :
	A() 
	{ std::cout << "Constructor called A" << std::endl; }
	~A()
	{ std::cout << "destructor called A" << std::endl; }
};

class B : virtual public A
{
public :
	B() 
	{ std::cout << "Constructor called B" << std::endl; }
	~B()
	{ std::cout << "destructor called B" << std::endl; }
};

class C : virtual public A
{
public :
	C() 
	{ std::cout << "Constructor called C" << std::endl; }
	~C()
	{ std::cout << "destructor called C" << std::endl; }
};

class D : public B, public C
{
public :
	D() 
	{ std::cout << "Constructor called D" << std::endl; }
	~D()
	{ std::cout << "destructor called D" << std::endl; }
};

int main()
{
    D obj;
    return 0;
}


/* Correct way of cons. & dest. calling, without adding "virtual" keyword; cons. & dests calls 2 times which cause ambiguities.

Constructor called A
Constructor called B
Constructor called C
Constructor called D
destructor called D
destructor called C
destructor called B
destructor called A
*/
