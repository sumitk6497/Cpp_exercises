#include<iostream>
using namespace std;
 
class X 
{
public:
	int x;
};
 
int main()
{
	X a = {10};
	X b = a;
	cout << a.x << " " << b.x << endl;		//10 10
	
	return 0;
}
