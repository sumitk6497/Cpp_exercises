#include <iostream>
using namespace std;

int main() {
	int T;
	cout << "Enter no. of test-cases : ";
	cin >> T;
	
	while(T--)
	{
	    int A, B, C;
	    cout << "Enter 3 angles : ";
	    cin >> A >> B >> C;
	    if(A <= 180 && B <= 180 && C <= 180)
	    {
	        if(A + B + C == 180)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    }
	}
	return 0;
}
