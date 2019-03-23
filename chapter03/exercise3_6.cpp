#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("aaaaa");
	for (auto &c : s1)
		c = 'x';
	cout << s1 << endl;
	return 0;
}
