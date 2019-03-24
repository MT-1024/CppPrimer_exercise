#include <iostream>
#include <iterator>
#include <vector>

using std::endl;
using std::cin;
using std::cout;
using std::iterator;
using std::vector;
using std::begin;
using std::end;

bool compare(int * pb1, int * pe1, int * pb2, int * pe2)
{
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	else
	{
		for (int *i = pb1, *j = pb2; i != pe1 && j != pe2; ++i, ++j)
		{
			if (*i != *j)
				return false;
		}
	}
	return true;
}

int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 1,2,3,4 };
	cout << compare(begin(arr1), end(arr1), begin(arr2), end(arr2));

	cout << "\n" << "****************use vector**************" << endl;

	vector<int> v1 = { 1,2,3 };
	vector<int> v2 = { 1,2,4 };
	if (v1 == v2)
		cout << "vector v1 equal to v2" << endl;
	else
		cout << "vector v1 not equal to v2" << endl;

	return 0;
}
