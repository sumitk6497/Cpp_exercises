#include <iostream>
using namespace std;

int main() 
{
	int arr[] = { 1,2,3,4,5 };
	
	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	for (const auto & x : arr) 
	{
		cout << x << " ";
	}
	cout << "\n";

	for (auto x : { 6,7,8,9,1,2,3 }) 
	{
		cout << x << " ";
	}
	cout << "\n";

	return 0;
}
