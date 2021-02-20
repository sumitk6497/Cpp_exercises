#include <iostream>
using namespace std;

#define PR_MODE
#ifdef PR_MODE
#define Log(x) cout << x << endl;
#else
#define Log(x) 
#endif

#define MAIN int main()\
{\
	Log("Sumit");\
	Log(5);\
	Log(5.5);\
\
	return 0;\
}

MAIN
/*
int main()
{
	Log("Sumit");
	Log(5);
	Log(5.5);

	return 0;
}
*/
