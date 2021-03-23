/************* SUM OF DIGITS ******************/

/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.
Input

The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.
Output

For each test case, calculate the sum of digits of N, and display it in a new line.
Constraints

    1 ≤ T ≤ 1000
    1 ≤ N ≤ 1000000

Example

Input
3 
12345
31203
2123
Output
15
9
8

*/


#include <iostream>
using namespace std;

int main() {
	int t = 0;
	
	cout << "Enter no. of testcases : ";
	cin >> t;
	
	while(t--)
	{
	    int sum = 0, num = 0;
	    cout << "\nEnter number : ";
	    cin >> num;
	    while(num > 0)
	    {
	        int rem = num%10;
	        num = num/10;
	        sum = sum + rem;
	    }
	    cout << "Sum of digits of given no. is : " << sum << endl;
	    
	}
	return 0;
}
