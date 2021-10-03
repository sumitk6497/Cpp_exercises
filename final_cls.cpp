#include <iostream>

using namespace std;

class Final;			//The class to be made final

class MakeFinal			//used to make Final class final
{
private :
	MakeFinal()
	{    cout << "MakeFinal Constructor" << endl;    }

	friend class Final;
};

class Final : virtual MakeFinal
{
public :
	Final()
	{    cout << "Final Constructor" << endl;    }
};

class Derived : public Final
{
public :
	Derived()
	{    cout << "Derived Constructor" << endl;    }
};


int main()
{
	Derived d;

	return 0;
}


/*
OUTPUT

final_cls.cpp: In constructor ‘Derived::Derived()’:
final_cls.cpp:27:2: error: ‘MakeFinal::MakeFinal()’ is private within this context
   27 |  {    cout << "Derived Constructor" << endl;    }
      |  ^
final_cls.cpp:10:2: note: declared private here
   10 |  MakeFinal()

*/
