#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> v1;
	string temp;
	while (cin >> temp)
		v1.push_back(temp);
	cout << v1.size() << endl;
	return 0;
}
