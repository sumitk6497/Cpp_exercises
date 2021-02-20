#include <iostream>
using namespace std;

class A
{
	public:
	  int a,b;
	  friend istream & operator >>(istream &in, A &ins);
	  friend ostream & operator <<(ostream &out, const A &ins);

	  void display()
	  {
	    cout<<"a="<<a<<" b="<<b<<endl;
	  }

	  A operator +(A const &obj)
	  {
	    A temp;
	    temp.a = a + obj.a;
	    temp.b = b + obj.b;
	    
	    return temp;
	  }

	  A operator -(A const &obj)
	  {
	    A temp;
	    temp.a = a - obj.a;
	    temp.b = b - obj.b;
	    
	    return temp;
	  }
	  
	  A operator ++()
	  {
	    A temp;
	    temp.a = ++a;
	    temp.b = ++b;

	    return temp;
	  }
	  A operator ++(int)
	  {
	    A temp;
	    temp.a = ++a;
	    temp.b = ++b;

	    return temp;
	  }
	  A operator --()
	  {
	    A temp;
	    temp.a = --a;
	    temp.b = --b;

	    return temp;
	  }
};

istream & operator >>(istream &in, A &ins)
{
	cout<<"Enter a : ";
	in>>ins.a;
	cout<<"Enter b : ";
	in>>ins.b;

	return in;
}

ostream & operator <<(ostream &out, const A &ins)
{
	out<<ins.a << "+i" << ins.b <<endl;
	return out;
}

int main()
{
	A obj;
	cin>>obj;
	cout<<obj;
	obj.display();

	A c1, c2;
	cin>>c1;
	c1.display();
	--c1;
	cout<<c1;
	c2 = c1 + obj;
	cout<<c2;
	c2++;
	c2.display();

	++c2;
	cout<<c2;
	A c3;
	c3 = c2 - obj;
	cout<<c3;
	++c3;
	cout<<c3;
	return 0;

}
