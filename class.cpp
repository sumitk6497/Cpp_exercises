#include <iostream>
using namespace std;

class A
{
	public :
		A()
		{ cout << "Constructor A call" << endl;
		}
		
		~A()
		{ cout << "Destructor A call" << endl;
		}
};

int main()
{
	A a;
	return 0;
}

