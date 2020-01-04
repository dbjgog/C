/*
例6.9 有3个字符串，要求找出其中最大者。
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str0, str1, str2;
	string str;
	int i;
	cin >> str0;
	cin >> str1;
	cin >> str2;
	if (str0 > str1) str = str0;
	else str = str1;
	if (str2 > str) str = str2;
	
	cout << "The largest string is :" << endl;
	cout << str << endl;
	return 0;
}