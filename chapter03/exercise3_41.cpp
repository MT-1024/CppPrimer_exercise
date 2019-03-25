#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{

	int arr[] = { 1,2,3,4,5,6 };
	vector<int> v1(begin(arr),end(arr));
	for (auto e : v1)
		cout << e <<" ";
	cout << endl;
	return 0;
}
