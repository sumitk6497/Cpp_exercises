#include<iostream>
using namespace std;

void test(float s,float t)
{
	cout << "Function with float called." << endl;
}

void test(int s,int t)
{
	cout << "Function with int called." << endl;
}

int main()
{
//	test(3.5, 5.6);		//ERROR
	test(3.5f, 5.6f); 	//Added suffix "f" to both values to tell compiler, it's a float value
	test(12,7);

	return 0;
}

