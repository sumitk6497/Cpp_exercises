#include <iostream>
using namespace std;


static int level = 4;
static int state = 2;

int main()
{
	state = level > 10 ? 10 : 5;
	cout << state << endl;

	return 0;
}
