#include <iostream>
using namespace std;

int main()
{
	int n = 10, i;

	for (i=0; i<n; i++)
	{
		n++;
		cout<< n << endl;
		goto x;
	}

x:
	do
	{
		cout << "label x"<< endl;
		break;
	}
	while( 0 ) ;

	return 0;
}

/*
11
label x
*/
