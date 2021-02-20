#include <iostream>
#include <vector>
using namespace std;

class Ver
{
public :
	float x,y,z;

	Ver(int x, int y, int z)
	  : x(x), y(y), z(z)
	{}

	Ver(const Ver& obj)
	  : x(obj.x), y(obj.y), z(obj.z)
	{
	  cout << "Copied" << endl;
	}
};

ostream &operator <<(ostream &out, Ver const &obj)
{
	out << obj.x << "  " << obj.y << "  " << obj.z;
	return out;
}

int main()
{
	vector<Ver> ver;
/*	ver.push_back({1,2,3});
	ver.push_back({4,5,6});
	ver.push_back({7,8,9});
*/
	ver.reserve(3);
	ver.emplace_back(1,2,3);			//ver.push_back(Ver(1,2,3));
	ver.emplace_back(4,5,6);			//ver.push_back(Ver(4,5,6));
	ver.emplace_back(7,8,9);			//ver.push_back(Ver(7,8,9));

	for(int i = 0; i < ver.size(); i++)
		cout << ver[i] << endl;

	ver.erase(ver.begin() + 1);

	for(int i = 0; i < ver.size(); i++)
		cout << ver[i] << endl;

	return 0;
}
