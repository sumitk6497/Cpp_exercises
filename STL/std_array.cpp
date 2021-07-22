#include <iostream>
#include <array>
using namespace std;

int main()
{
	std::array<int, 5> myarray;		//declaration

	std::array<int, 5> myarray1 = {1,2,3,4,5};	//initializer list
	std::array<int, 5> myarray2 {1,2,3,4,5};	//uniform initialization

	std::array<double, 5> myarray3;
	myarray3 = {3.79,1.32,4.444,5.0,2.12};			//assign using initializer list

	std::array<int, 8> myarray4;
	myarray4.fill(5);			//initialize all element with 5

	cout << "size of arrays : ";
	cout << myarray.size() << " ";
	cout << myarray1.size() << " ";
	cout << myarray2.size() << " ";
	cout << myarray3.size() << " ";
	cout << myarray4.size() << endl;

	for(auto i : myarray1)
	    cout << i << " ";
	
	cout << "\n";
	for(auto i : myarray4)
	    cout << i << " ";

	cout << "\n";
	for(auto i : myarray3)
	    cout << i << " ";

	cout << "\n";

	cout << "First element of Array 2 : " << myarray2.front() << endl;
	cout << "Last element of Array 2 : " << myarray2.back() << endl;

	return 0;
}
