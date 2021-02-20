#include <iostream>
#include <array>
using namespace std;

int main()
{
	int a[5];
	int *ptr = a;
	a[0] = 2;
	a[4] = 1;

	int size = sizeof(a);
	int count =sizeof(a) / sizeof(int);
	cout<<"size = "<<size<<" count = "<<count<<endl;

	for(int i=0; i < 5; i++)
		a[i] = 2;
	for(int i=0; i < 5; i++)
		cout<<a[i]<<endl;
	cout<<a[0]<<" "<<*(ptr)<< " "<<a<< " "<<ptr<<endl;

	int *arr = new int[5];
	for(int i=0; i < 5; i++)
		arr[i] = 2;

	for(int i=0; i < 5; i++)
		cout<<arr[i]<<endl;
	int size1 = sizeof(arr);
	int count1 =sizeof(arr) / sizeof(int);
	cout<<"size = "<<size1<<" count = "<<count1<<endl;

	delete []arr;

	array<int, 5> myarr;
	for(int i=0; i < myarr.size(); i++)
		myarr[i] = 2;
	for(int i=0; i < myarr.size(); i++)
		cout<<myarr[i]<<endl;

	cout<<"size = "<<myarr.size()<<endl;

	array<char, 5> mychar;
	for(int i=0; i < mychar.size(); i++)
		mychar[i] = 65;
	for(int i=0; i < mychar.size(); i++)
		cout<<mychar[i]<<endl;
	cout<<"size = "<<mychar.size()<<endl;
	return 0;
}
