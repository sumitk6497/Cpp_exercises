#include<iostream>
using namespace std;
 
class Point 
{
public:
	Point() 
	{ cout << "Normal Constructor called" << endl; }
	
	Point(const Point &t) 
	{ cout << "Copy constructor called" << endl; }
};
 
int main()
{
	Point *t1, *t2;			//No constructor call
	t1 = new Point();		//Normal constructor call
	t2 = new Point(*t1);		//Copy constructor call
	Point t3 = *t1;			//copy constructor call
	Point t4;			//Normal constructor call
	t4 = t3;			//Assignment operator call

	return 0;
}
