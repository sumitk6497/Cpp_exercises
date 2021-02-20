#include <iostream>
using namespace std;

template<typename T>
void Print(T value)
{
	cout<<value<<endl;
}

int main()
{
	Print(5);
	Print("Sumit");
	Print(5.50f);

	return 0;
}
