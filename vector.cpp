#include <iostream>
#include <vector>
using namespace std;

class Ver
{
public :
	float x,y;

};

ostream &operator <<(ostream &out, Ver const &obj)
{
	out << obj.x << "  " << obj.y;
	return out;
}

int main()
{
	vector<Ver> ver;
	ver.push_back({1,2});
	ver.push_back({4,8});

	for(int i = 0; i < ver.size(); i++)
		cout << ver[i] << endl;

//	for(Ver v : ver)
//		cout << v << endl;

//	ver.clear();
//	cout << "clear" << endl;
	ver.erase(ver.begin() + 1);

	for(int i = 0; i < ver.size(); i++)
		cout << ver[i] << endl;

	return 0;
}
