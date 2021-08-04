#include <iostream>
#include <string.h>

using namespace std;

class Test
{
public:
	int main(int s)
	{
		cout << s << endl;
		return 0;
	}
	int main(string s)
	{
		cout << s << endl;
		return 0;
	}
	void main(int s ,float m)
	{
		cout << s << "   " << m << endl;
	}
};


int main()
{
	Test obj;
	obj.main(3);
	obj.main("I love C++");
	obj.main(9, 6.4);
	return 0;
}

