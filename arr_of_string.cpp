#include <iostream>
#include <string>
#include <vector>
#include <array>

int main()
{	
	//Array of Pointer
	const char *lang[4] = {"C lang", "C++", "Java", "Python"};

	std::cout << "Array of Pointer.........!!!!!!!!!!" << std::endl;
	for(int i = 0; i < 4; i++)
	    std::cout << lang[i] << std::endl;
	std::cout << "\n";



	//2D Array
	char lang1[4][10] = {"C lang", "C++", "Java", "Python"};

	std::cout << "2D Array..........!!!!!!!!!" << std::endl;
	for(int i = 0; i < 4; i++)
	    std::cout << lang1[i] << std::endl;
	std::cout << "\n";



	//String Array
	std::string lang2[4] = {"C lang", "C++", "Java", "Python"};

	std::cout << "String Array..........!!!!!!!!!" << std::endl;
	for(int i = 0; i < 4; i++)
	    std::cout << lang2[i] << std::endl;
	std::cout << "\n";



	//Vector of String type
	std::vector<std::string> lang3 {"C lang", "C++", "Java"};
	lang3.push_back("Python");

	std::cout << "Vector of String Type..........!!!!!!!!!" << std::endl;
	for(int i = 0; i < 4; i++)
	    std::cout << lang3[i] << std::endl;
	std::cout << "\n";



	//Array class of String type
	std::array<std::string, 4> lang4 {"C lang", "C++", "Java", "Python"};

	std::cout << "Array class of String Type..........!!!!!!!!!" << std::endl;
	for(int i = 0; i < 4; i++)
	    std::cout << lang4[i] << std::endl;
	std::cout << "\n";


	return 0;
}
