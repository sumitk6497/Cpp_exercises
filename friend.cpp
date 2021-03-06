#include <iostream>
using namespace std;

class test
{
	int data1,data2;
public :
	test ()
	{ cout<<"default constructor called."<<endl; }

	test(int a,int b)
	{
	    cout<<"parameterized constructor called."<<endl;
	    data1 = a;
	    data2 = b;
	}
	void display();
	friend void mult(test &obj);
};

void test::display()
{
	cout<<"data1 = "<<data1<<"  data2 = "<<data2<<endl;
}

void mult(test &obj)
{
	int result;
	result = obj.data1 * obj.data2;
	cout<<"multiplication = "<<result<<endl;
}


int main()
{
	test obj;
	test obj1(10,20);
	obj1.display();
	mult(obj1);

	return 0;
}
