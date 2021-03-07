#include <iostream> 
using namespace std; 

// Objects of Test can not be dynamically allocated 
class Test 
{ 
	// Notice this, new operator function is private 
	void* operator new(size_t size); 
	int x; 
public: 
	Test()
	{ x = 9; cout << "Constructor is called....!!!\n"; } 

	void display()
	{ cout << "x = " << x << "\n"; } 

	~Test()
	{ cout << "Destructor called....!!!!\n"; } 
}; 

int main() 
{ 
	// Uncommenting following line would cause a compile time error. 
//	Test* obj=new Test(); 
	Test obj;		 // Ok, object is allocated at compile time 
	obj.display(); 
	return 0; 
} 

