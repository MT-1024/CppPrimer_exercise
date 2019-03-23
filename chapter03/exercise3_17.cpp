#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	string temp;
	vector<string> v1;
	while (cin >> temp)
	{
		v1.push_back(temp);
	}
	for (auto &str : v1)
	{
		for (auto &i : str)
			i = toupper(i);
	}
	for (auto i : v1)
		cout << i << endl;
	/*for (vector<string>::size_type index = 0; index < v1.size(); index++)
	{
		cout << v1[index] << endl;
	}*/
	return 0;
}
