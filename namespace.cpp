#include <iostream>
#include <string>

namespace apple
{
	void fun(int a)
	{	std::cout << a << std::endl; }

}

namespace orange
{
	void fun(int a)
	{	std::cout << a*10 << std::endl; }

};

//using namespace apple;
//using namespace orange;

int main()
{
	fun(6);
#if 0 
	orange::fun(5);

	apple::fun(5);
#endif
	return 0;
}
