#include <iostream>
#include <string>

int main()
{
	std::string str1 = "github\nrepositories\nCpp";
	std::string str2 = R"(github\nrepositories\nCpp)";

	std::cout << "Normal string : " << str1 << std::endl;
	std::cout << "Raw string : " << str2 << std::endl;
	return 0;
}
