#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	double x = 5.0, y = 2.0;

	double result = pow(x, y);
	cout << fixed << setprecision(2) << result << endl;		//printf("%.2lf", result);

	a = (int)(pow(5,2) + 0.5);
	cout << a << endl;

	return 0;
}

/*
Syntax : double pow(double x, double y);


*/
