/*
例7.4 输入两个实数，用一个函数求出它们之和。
*/

#include<iostream>
using namespace std;
int main()
{
	float add(float x, float y);
	float a, b, c;
	cout << "Please enter a and b:";
	cin >> a >> b;
	c = add(a, b);
	cout << "sum is " << c << endl;
	return 0;
}

float add(float x, float y)
{
	float z;
	z = x + y;
	return z;
}