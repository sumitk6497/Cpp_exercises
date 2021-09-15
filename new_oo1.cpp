#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class Test 
{
	int x;
public:
	void* operator new(size_t size);
	void operator delete(void*);
	Test(int i) 
	{
		x = i;
		cout << "Constructor called" << endl;
	}
	~Test() { cout << "Destructor called" << endl; }
};

void* Test::operator new(size_t size)
{
	void *storage = malloc(size);
	cout << "new called" << endl;
	return storage;
}

void Test::operator delete(void *p )
{
	cout<<"delete called" << endl;
	free(p);
}

int main()
{
	Test *m = new Test(5);
	delete m;
	return 0;
}

