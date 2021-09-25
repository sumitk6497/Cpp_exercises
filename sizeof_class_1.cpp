#include<iostream>

using namespace std;

class Test
{
public :
	static int i;
	int j;
};

int Test::i;

int main()
{
	cout << sizeof(Test) << endl;		//4
	
	return 0;
}

