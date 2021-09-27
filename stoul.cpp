// CPP code to convert hexadecimal string to int
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	string str = "FF";				//Hexadecimal string

	unsigned long num = stoul(str, nullptr, 16);	//converted integer

	cout << num << endl;

	string st = "FFFFFF";

	unsigned long long val = stoull(st, nullptr, 16);

	cout << val << endl;
	return 0;
}

