#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("this . is  % a @@  string !!!");
	string result;
	for (auto &c : s1)
	{
		if (!ispunct(c))
			result += c;
	}
	cout << result << endl;
	return 0;
}
