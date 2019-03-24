#include <iostream>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::iterator;
using std::end;


int main()
{
	int arr[10] = {5};
	for (int *i = arr; i != end(arr); ++i)
		* i = 0;	
	for (auto i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
