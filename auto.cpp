#include <iostream>
#include <string>
using namespace std;

int main()
{
	//auto a = 5;
	//auto name = "sumit";
	int a = 5;
	string name = "sumit";
	cout << a << "  " << name << endl;
	//cout << sizeof(a) << "  " << sizeof(name) << endl; 
	cout << sizeof(a) << "  " << name.size() << endl; 

	return 0;
}
