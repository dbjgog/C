/*
例7.2 输入两个整数，要求输出其中较大者。要求用函数来找到大数。
*/

#include<iostream>
using namespace std;

int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}

int main()
{
	int max(int x, int y);
	int a, b, c;
	cout << "please enter two integer numbers:";
	cin >> a >> b;
	c = max(a, b);
	cout << "max is " << c << endl;
	return 0;
}