#include <iostream>

class base
{
    public :
        virtual void display()
	{ std::cout << "display function of base class called."<<std::endl; }
};

class derived : public base
{
	//derived class inherite display() function from base and call base class display() whenever we call display() of derived class
};

int main()
{
	base obj;
	obj.display();				//base class fun called
	obj.base::display();			//base class fun called
	std::cout <<"------------------------------------------------" << std::endl;

	derived obj1;
	obj1.display();				//base class fun called
	obj1.base::display();			//base class fun called
	std::cout <<"------------------------------------------------" << std::endl;

	base *b = new base();
	b->display();				//base class fun called
	b->base::display();			//base class fun called
	std::cout <<"------------------------------------------------" << std::endl;

	base *c = new derived();
	c->display();				//base class fun called
	c->base::display();			//base class fun called
	std::cout <<"------------------------------------------------" << std::endl;

	derived *d = new derived();
	d->display();				//base class fun called
	d->derived::display();			//base class fun called
	d->base::display();			//base class fun called
	std::cout <<"------------------------------------------------" << std::endl;
	return 0;
}

