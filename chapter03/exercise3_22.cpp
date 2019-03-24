#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> text;
	text.push_back("aaaaa aaaa aaaaa");
	text.push_back(""); //空字符串
	text.push_back("bbb  bbb bbb");
	cout << text.size() << endl;
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto &c : *it)
		{
			if (isalpha(c))
				c = toupper(c);
		}
	}
	for (auto i : text)
		cout << i << endl;

	return 0;
}
