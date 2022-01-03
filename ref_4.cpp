#include <iostream>

using namespace std;

int main()
{
	int org;				//declare original variable
	int &lval_ref = org;			//declare lvalue ref to org
	int &&rval_ref = (int &&)org;		//declare rvalue ref to org

	org = 10;

	cout << "org = " << org << ", lval_ref = " << lval_ref << ", rval_ref = " << rval_ref << endl;		//10  10  10

	org = 2;
	lval_ref = 5;
	rval_ref = 7;

	cout << "org = " << org << ", lval_ref = " << lval_ref << ", rval_ref = " << rval_ref << endl;		//7  7  7

	cout << "org add. = " << &org << ", lval_ref add. = " << &lval_ref << ", rval_ref add. = " << &rval_ref << endl;

	return 0;
}
