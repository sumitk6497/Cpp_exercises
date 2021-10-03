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


int main()
{
	Final f;

	return 0;
}


/*
OUTPUT

MakeFinal Construtor
Final Construtor
*/
