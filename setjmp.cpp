#include <iostream>
#include <setjmp.h>

using namespace std;

jmp_buf buf;

int main()
{
	int x = 1;

	setjmp(buf);			// Setup jump position using buf
	cout << "1 "; // Prints 1

	x++;
	if (x <= 100)
		longjmp(buf, 1);	// Jump to the point setup by setjmp

	cout << endl;

	return 0;
}

