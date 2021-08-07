#include <iostream>
using namespace std;

int main()
{
	int *a = new int[5];			//allocate memory for array with 5 integers
	for(int i=0; i < 5; i++)
		a[i] = i;

	for(int i=0; i < 5; i++)
		cout << a[i] << "  ";		//0 1 2 3 4

	cout <<"\n";
	delete []a;				//deallocate memory of array 



	int *b = new int[7]{ 12,14,16,18,20,22,24};			//allocatation & initialization
	for(int i=0; i < 7; i++)
		cout << b[i] << "  ";					//12 14 16 18 20 22 24

	cout <<"\n";		
	delete []b;							//deallocate memory

	return 0;
}
