/***************** Usage of Queue *****************/

/**************************************************
*		STANDARD HEADER FILE
**************************************************/
#include <iostream>
#include <queue>

/*************************************************
*		MAIN FUNCTION
*************************************************/
int main()
{
	std::queue<int> myqueue;
	
	if(myqueue.empty())
	    std::cout<<"Queue is Empty...!!!!!!"<<std::endl;
	else
	    std::cout<<"Queue is not Empty...!!!!!"<<std::endl;

	myqueue.push(0);
	myqueue.push(1);
	myqueue.push(2);
	myqueue.push(3);
	myqueue.push(4);
	myqueue.pop();

	std::cout<<"Queue size : "<<myqueue.size()<<std::endl;
	std::cout<<"myqueue is : ";
	while(!myqueue.empty())
	{
	    std::cout<<myqueue.front()<<" ";
	    myqueue.pop();
	}

	std::cout<<"\nQueue size : "<<myqueue.size()<<std::endl;
	return 0;
}


