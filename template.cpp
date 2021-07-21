#include <iostream>

template <typename X>
X myMax(X a, X b)
{
	if(a > b)
	    return a;
	else
	    return b;
}

int main()
{
	std::cout<<myMax<int>(9,5)<<std::endl;
	std::cout<<myMax<double>(1.2,5.9)<<std::endl;
	std::cout<<myMax<char>('k','s')<<std::endl;

	return 0;
}
