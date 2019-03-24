#include <iostream>
#include <string>
//#include <cstring>

using namespace std;

int main()
{
	string str1("hello");
	string str2("world");
	if (str1 != str2)
		cout << "not equal" << endl;

	char a[] = "aaaaa";
	char b[] = "bbbbb";
	if (strcmp(a, b))
		cout << "not equal" << endl;
	return 0;
}
