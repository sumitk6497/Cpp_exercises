/********** Implementation of my_queue class *******/


/*****************************************************
*	STANDARD HEADER FILES
*****************************************************/
#include <iostream>
#include <stddef.h>

/****************************************************
*	MACRO
****************************************************/
#define TRUE 1
#define FALSE 0

/****************************************************
*	INTERFACE FOR my_queue class
****************************************************/
template<typename T>
class my_queue_intf 
{
public:
	virtual void push(T&&) = 0;
	virtual void pop() = 0;
	virtual bool empty() = 0;
	virtual size_t size() = 0;
	virtual const T& front() const = 0;
	virtual const T& back() const = 0;
	virtual T& front() = 0;
	virtual T& back()  = 0;
};

/***************************************************
*	Node Creation
***************************************************/
template<typename T>
class my_queueNode 
{
public:
	T data;
	my_queueNode* next;
	my_queueNode() {}
	my_queueNode(T&& rdata) : data(rdata), next(NULL) {}
	my_queueNode(T& rdata)  : data(rdata), next(NULL) {}
	my_queueNode(my_queueNode&& rhs) : data(rhs.data), next(rhs.next) {}
	my_queueNode(my_queueNode& rhs)  : data(rhs.data), next(rhs.next) {}

	my_queueNode* operator++(int)
	{
	    this->next = this->next->next;
	}
};


/***************************************************
*	my_queue class
***************************************************/
template<typename T>
class my_queue : public my_queue_intf<T>
{
private :
	my_queueNode<T> *Front, *rear;
	size_t my_size;
public :
	my_queue() : my_size(0), Front(NULL), rear(NULL) {}
	my_queue(my_queue& rhs);
	void push(T&&);
	void pop();
	bool empty();
	size_t size();
	const T& front() const;
	const T& back() const;
	T& front();
	T& back();

	my_queueNode<T>& getFront() 
	{
	    return *Front;
	}
};

/****************************************************
*	Function Name : push()
*	Description   : Enter element in Queue
****************************************************/
template<typename T>
void my_queue<T>::push(T&& rdata) 
{
	my_queueNode<T>* newnode = new my_queueNode<T>(std::move(rdata));
	my_size++;
	if(this->empty()) 
	{
	    Front = rear = newnode;
	}

	rear->next = newnode;
	rear = newnode;
}

/****************************************************
*	Function Name : pop()
*	Description   : Remove element from Queue
****************************************************/
template<typename T>
void my_queue<T>::pop() 
{
	if (this->empty()) 
	{
	    return;
	}

	my_queueNode<T>* holder = Front;
	Front = Front->next;
	if (Front == NULL)
	    rear = NULL;

	my_size--;
	delete (holder);
	holder = NULL;
}

/****************************************************
*	Function Name : empty()
*	Description   : Check weather Queue is empty or not
****************************************************/
template<typename T>
bool my_queue<T>::empty() 
{
	if(Front == NULL)
	    return TRUE;
	else
	    return FALSE;
}

/****************************************************
*	Function Name : size()
*	Description   : Return size of Queue
****************************************************/
template<typename T>
size_t my_queue<T>::size() 
{
	return my_size;
}

/****************************************************
*	Function Name : front()
*	Description   : Return first element from Queue
****************************************************/
template<typename T>
const T& my_queue<T>::front() const 
{
	return Front->data;
}

/****************************************************
*	Function Name : back()
*	Description   : Return last element from Queue
****************************************************/
template<typename T>
const T& my_queue<T>::back() const 
{
	return rear->data;
}


template<typename T>
T& my_queue<T>::front()  
{
	return Front->data;
}

template<typename T>
T& my_queue<T>::back() 
{
	return rear->data;
}


/****************************************************
*	COPY CONSTRUCTOR
****************************************************/
template<typename T>
my_queue<T>::my_queue(my_queue& rhs) 
{
	my_queueNode<T>* item = &rhs.getFront();
	size_t l_size = rhs.size();

	if(item == NULL) 
	    return;

	my_queueNode<T>* newnode = new my_queueNode<T>(std::move(item->data));
	Front = rear = newnode;
	item = item->next;
	my_size++;
	newnode = NULL;

	while(item != NULL) 
	{
	    my_queueNode<T>* newnode = new my_queueNode<T>(std::move(item->data));
	    rear->next = newnode;
	    rear = newnode;
	    item = item->next;
	    my_size++;
	}
}


/*************************************************
*		MAIN FUNCTION
*************************************************/
int main() 
{
	my_queue<int>* myqueue = new my_queue<int>;

	if(myqueue->empty())
	    std::cout<<"Queue is Empty...!!!!!!!"<<std::endl;
	else
	    std::cout<<"Queue is not Empty...!!!!!"<<std::endl;

	myqueue->push(1);
	myqueue->push(2);
	myqueue->push(3);
	myqueue->push(4);
	myqueue->push(5);
	myqueue->pop();

	my_queue<int> myqueue2 = *myqueue;
	std::cout<<"myqueue2 is :  ";

	while(!(myqueue2.empty())) 
	{
	    std::cout<<myqueue2.front()<<" ";
	    myqueue2.pop();
	}

	std::cout<<"\nLast element in m_queue : "<<myqueue->back()<<std::endl;
	std::cout<<"\nm_queue size is : "<<myqueue->size()<<std::endl;
	std::cout<<"m_queue is :  ";

	while(!(myqueue->empty())) 
	{
	    myqueue->front()++;
	    std::cout<<myqueue->front()<<" ";
	    myqueue->pop();
	}
	std::cout<<"\n";

	if(myqueue->empty())
	    std::cout<<"Queue is Empty...!!!!!!!"<<std::endl;

	delete myqueue;

	return FALSE;
}	
