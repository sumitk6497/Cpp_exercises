#include <iostream>

class base
{
    public :
        void getData(int a)
	{ std::cout << "Integer value : " << a <<std::endl; }
        
	void getData(double d)
	{ std::cout << "Doble value : " << d <<std::endl; }
        
	void getData(int a, int b, float f)
	{ std::cout << "Integer values : " << a <<", " << b << ", " << f <<std::endl; }
        
	void getData(char c)
	{ std::cout << "Character value : " << c <<std::endl; }
};

int main()
{
	base obj;
	obj.getData(5);
	obj.getData(22.205);
	obj.getData(99,7,64.97);
	obj.getData('s');

	return 0;
}

