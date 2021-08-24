#include <iostream>
#include <string>

using namespace std;

void extractChar(string str)
{
	char ch;

	int l = str.length();
	for (int i = 0; i < l; i++) {
		ch = str.at(i);
		cout << ch << "  ";
	}					//G  i  t  h  u  b  R  e  p  o  s  i  t  o  r  i  e  s
	cout << endl;
}

int main()
{
	string str("GithubRepositories");
	cout << str.at(6) << endl;		//R

	extractChar(str);
	return 0;
}

