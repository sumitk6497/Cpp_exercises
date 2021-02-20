#include <iostream>
#include <string>
#include <cstring>
#include <memory>
using namespace std;

class Ent
{
	char * m_str;
	unsigned int m_size;
public :
	Ent(const char* str)
	{ 
	  cout << "Obj cretaed !!!!!! " << endl; 
	  m_size = strlen(str);
	  m_str = new char[m_size + 1];
	  memcpy(m_str, str, m_size);
	  m_str[m_size] = 0;
	}

	Ent(const Ent& obj) : m_size(obj.m_size)
	{
	  cout << "Obj cretaed via copy cons!!!!!! " << endl; 
	  m_str = new char[m_size + 1];
	  memcpy(m_str, obj.m_str, m_size + 1);
	}

	~Ent()
	{ 
	  cout << "Obj destoryed !!!!!! " << endl; 
	  delete[] m_str;
	}

	char& operator [](unsigned int index)
	{ return m_str[index]; }

	friend ostream &operator <<(ostream &out, const Ent& obj);
};

ostream &operator <<(ostream &out, const Ent& obj)
{
	out << obj.m_str << endl;
	return out;
}


int main()
{
	Ent e("Sumit");
	Ent a = e;
	cout << e;
	cout << a;
	a[2] = 'p';
	cout << e;
	cout << a;
	return 0;
}
