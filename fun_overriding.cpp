#include <iostream>

class base
{
    public :
        void display()
	{ std::cout << "display function of base class called."<<std::endl; }
};

class derived : public base
{
    public :
        void display()
	{ std::cout << "display function of derived class called."<<std::endl; }
};

int main()
{
	derived obj;
	obj.display();		//derived class fun called
	obj.base::display();	//base class fun called

	return 0;
}

