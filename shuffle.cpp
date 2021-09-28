#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	array<int, 8> s{ 1, 2, 3, 4, 5, 6, 7, 8 };

	unsigned seed = 0;

	shuffle(s.begin(), s.end(), default_random_engine(seed));

	cout << "shuffled elements are:";
	for (int& i : s)
		cout << ' ' << i;
	
	cout << endl;

	return 0;
}

