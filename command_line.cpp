#include <iostream> 
using namespace std; 

int main(int argc, char** argv) 
{ 
	int j = 1;
	cout << "You have entered " << argc 
		<< " arguments:" << endl; 

	for (int i = 0; i < argc; ++i) 
		cout <<"Argument "<< j++ << " : "<< argv[i] << endl; 

	return 0; 
} 

