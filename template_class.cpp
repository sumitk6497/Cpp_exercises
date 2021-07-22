#include <iostream>
using namespace std;

template <class X>
class arrayList
{
private:
    struct controlBlock
    {
    	int capacity;
	X *arr_ptr;
    };
    controlBlock *s;
public:
    arrayList(int capacity)
    {
    	s = new controlBlock;
	s->capacity = capacity;
	s->arr_ptr = new X[s->capacity];
    }

    void addElement(int index, X data)
    {
    	if(index >= 0 && index <= s->capacity-1)
	    s->arr_ptr[index] = data;
	else
	    cout << "No valid index." <<endl;
    }

    void viewElement(int index, X &data)
    {
    	if(index >= 0 && index <= s->capacity-1)
	    data = s->arr_ptr[index];
	else
	    cout << "No valid index." <<endl;
    }

    void viewList()
    {
        for(int i = 0; i < s->capacity; i++)
		cout <<s->arr_ptr[i] << "  ";

	cout << "\n";
    }

};

int main()
{
	int data;
	arrayList <int>mylist(4);
	mylist.addElement(0,2);
	mylist.addElement(1,4);
	mylist.addElement(3,12);
	mylist.viewList();

	arrayList <float>mylist1(4);
	mylist1.addElement(0,0.2);
	mylist1.addElement(1,4.12);
	mylist1.addElement(2,44.97);
	mylist1.addElement(3,7.8);
	mylist1.viewList();

	arrayList <char>mylist2(6);
	mylist2.addElement(0,'g');
	mylist2.addElement(1,'i');
	mylist2.addElement(2,'t');
	mylist2.addElement(3,'h');
	mylist2.addElement(4,'u');
	mylist2.addElement(5,'b');
	mylist2.viewList();

	return 0;
}
