#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a[10];
	int i = 0;
	for (auto &e : a)
	{
		e = i++;
	}
	for (auto e : a)
		cout << e << endl;
	return 0;
}
