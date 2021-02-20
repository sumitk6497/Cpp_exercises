#include <iostream>
using namespace std;

class base{
  int a,b;
public :
    friend istream & operator >>(istream &in, base &c);
    friend ostream & operator <<(ostream &out, base &c);
};
    istream & operator >>(istream &in, base &c)
    {
        cout<<"Enter real part : ";
        in>>c.a;
        cout<<"Enter img part : ";
        in>>c.b;
        return in;
    }
     ostream & operator <<(ostream &out, base &c)
    {
        out<<c.a;
        out<<"+i"<<c.b;
        return out;
    }
int main()
{
    base b1;
    cin>>b1;
    cout<<b1;
    return 0;
}
