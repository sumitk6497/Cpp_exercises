#include <iostream>

class base
{
    public :
        virtual void display()
	{ std::cout << "display function of base class called."<<std::endl; }
};

class derived : public base
{
    public :
        void display()
	{ std::cout << "display function of derived class called."<<std::endl; }
        
	void displayfun()
	{ std::cout << "displayfun function of derived class called."<<std::endl; }
};

int main()
{
	base obj;
	obj.display();				//base class fun called
	obj.base::display();			//base class fun called
//	obj.displayfun();			//ERROR : displayfun() is not member function of base class
	std::cout <<"------------------------------------------------" << std::endl;

	derived obj1;
	obj1.display();				//derived class fun called
	obj1.base::display();			//base class fun called
	obj1.displayfun();			//derived class fun called
//	obj.base::displayfun();			//ERROR : displayfun() is not member function of base class
	std::cout <<"------------------------------------------------" << std::endl;

	base *b = new base();
	b->display();				//base class fun called
	b->base::display();			//base class fun called
//	b->displayfun();			//ERROR : displayfun() is not member function of base class
	std::cout <<"------------------------------------------------" << std::endl;

	base *c = new derived();
	c->display();				//derived class fun called
	c->base::display();			//base class fun called
//	c->derived::displayfun();		//ERROR : derived i not class of base
//	c->displayfun();			//ERROR : displayfun() is not member function of base class
	std::cout <<"------------------------------------------------" << std::endl;

	derived *d = new derived();
	d->display();				//derived class fun called
	d->derived::display();			//derived class fun called
	d->base::display();			//base class fun called
	d->displayfun();			//ERROR : displayfun() is not member function of base class
	std::cout <<"------------------------------------------------" << std::endl;
	return 0;
}

