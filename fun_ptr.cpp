#include <iostream>
using namespace std;

void Print(int count, char ch) 
{
	for (int i = 0; i < count; i++) 
		cout << ch;
	
	cout << endl; 
}

void EndMessage() 
{
	cout << "End of program" << endl; 
}


int main() {
	//Register a handler. This handler will be invoked after main returns
	atexit(EndMessage);
	Print(5, '#');

	void(*pfn) (int, char) = Print;

	//One way to invoke function pointer
	(*pfn)(8, '@');

	//Another way to invoke function pointer
	pfn(3, '+');

	cout << "end of main" << endl;
	return 0;
}
