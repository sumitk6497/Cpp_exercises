#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	float b;
	
	cout << sizeof(++a + b) << "   ";		//4
	cout << a << endl;				//5

	return 0;
}

/* 
The a as a integer will be converted to float while calculating the size. 
The value of any variable doesn’t modify inside sizeof operator. 
Hence value of variable a will remain 5. 
*/
