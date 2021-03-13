#include <iostream>
#include <vector>

void bin_comb(int n, int bin[], int pos);

int main()
{
	int n;

	std::cout << "Enter no. of bits : ";
	std::cin >> n;

	int bin[n];
	bin_comb(n, bin, 0);

	return 0;
}


void bin_comb(int n, int bin[], int pos)
{
	if(pos == n)
	{
	    for( int i = 0; i < n; i++)
	        std::cout << bin[i] << "  ";
	    std::cout << std::endl;
	    return;
	}

	bin[pos] = 0;
	bin_comb(n, bin, pos + 1);
	bin[pos] = 1;
	bin_comb(n, bin, pos + 1);
}

