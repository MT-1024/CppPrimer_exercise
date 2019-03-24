#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main()
{

	//use array
	int array1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int array2[10] = {0};
	size_t i = 0;
	for (auto &e : array2)
	{
		e = array1[i++];
	}
	for (auto e : array2)
		cout << e << " ";;

	cout <<"\n"<< "***************************" << endl;

	//use vector
	vector<int> v1{0,1,2,3,4,5,6,7,8,9};
	vector<int> v2(10);
	auto iter = v1.begin();
	for (auto &e : v2)
	{
		e = *(iter++);
	}
	for (auto e : v2)
		cout << e << " ";
	return 0;
}
