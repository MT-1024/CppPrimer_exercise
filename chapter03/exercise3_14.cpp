#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1;
	int temp;
	while (cin >> temp)
		v1.push_back(temp);
	return 0;
}
