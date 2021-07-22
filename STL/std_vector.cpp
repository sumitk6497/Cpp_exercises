#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> arr;				//declaration
	std::vector<int> arr1 (5,20);

	std::vector<int> arr2 = {1,2,3,4,5};	//initializer list
	std::vector<int> arr3 {1,2,3,4,5};	//uniform initialization

	std::vector<double> arr4;
	arr4 = {3.79,1.32,4.444,5.0,2.12};			//assign using initializer list

	cout << "size of vectors : ";
	cout << arr.size() << " ";
	cout << arr1.size() << " ";
	cout << arr2.size() << " ";
	cout << arr3.size() << " ";
	cout << arr4.size() << endl;

	for(auto i : arr1)
	    cout << i << " ";	
	cout << "\n";

	arr2[3] = 6;
	arr2.at(1) = 7;
	for(auto i : arr2)
	    cout << i << " ";	
	cout << "\n";

	for(auto i : arr4)
	    cout << i << " ";
	cout << "\n";

	cout << "First element of Vector 2 : " << arr2.front() << endl;
	cout << "Last element of Vector 2 : " << arr2.back() << endl;

	return 0;
}
