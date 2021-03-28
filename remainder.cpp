#include <iostream> 
using namespace std;

int main() 
{
	int T;
	cout << "Enter no. of test-cases : ";
	cin >> T;
	while (T--) 
	{
		int a, b;
		cout << "Enter two no. : ";
		cin >> a >> b;

		int ans = a%b;
		cout << "Remainder = " << ans << endl;
	}
	return 0;
}
