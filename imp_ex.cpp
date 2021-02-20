#include <iostream>
#include <string>

using namespace std;

class Entity
{
	string name;
	int age;
public :
	Entity(const string& iname) : name(iname), age(-1) {}

	explicit Entity(int iage) : name("Kumar"), age(iage) {}
	
	void printData()
	{ cout << name << "  " << age << endl; }
};

int main()
{
	Entity a("Sumit");
	Entity b(22);
	//Entity a = Entity("Sumit");
	//Entity b = Entity(22);
//	Entity a = "Sumit";
//	Entity b = 22;
	a.printData();
	b.printData();

	return 0;
}
