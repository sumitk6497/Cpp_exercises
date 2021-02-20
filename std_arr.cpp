#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int,5> data;
	data[0] = 1;
	data[4] = 5;

	cout << data[0] << " " << data[4] << endl;

	sort(data,data+5);

//	for ( int i = 0; i < data.size(); i++ )
//		data[i] = i;

	for ( int i = 0; i < data.size(); i++ )
		cout << data[i] << endl;
	return 0;
}
