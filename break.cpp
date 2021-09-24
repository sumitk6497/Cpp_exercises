#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	for (int i = 0; i < 10; i++)
	{
		x = x++ + ++x;
		if (x > 100)
			break;
	}

	cout << x << endl;		//126

	return 0;
}

