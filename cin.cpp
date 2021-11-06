#include<iostream>
using namespace std;

int main ()
{
	int cin;
	
	cin >> cin;
	cout << "cin : " << cin << endl;		//0 : garbage value

	return 0;
}

/* cin is a variable hence overrides the cin object. cin >> cin has no meaning so no error. */
