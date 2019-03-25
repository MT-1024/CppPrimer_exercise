#include <cstring>
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
	const char cstr1[] = "Hello";
	const char cstr2[] = "world";
	const char cstr4[] = { 'H','e','l','l','o','\0' };	//cstr4的长度是5，'\0'不算，但是需要'\0'作为该字符数组结束的标志

	cout << strlen(cstr1) << endl;	//	不包括'\0'
	cout << sizeof(cstr1) << endl;	//	包括'\0'
	size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
	char* cstr3 = new char[new_size];

	strcpy(cstr3, cstr1);
	strcat(cstr3, " ");
	strcat(cstr3, cstr2);

	cout << new_size << endl;
	delete[] cstr3;
}
