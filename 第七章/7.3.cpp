/*
例7.3 将例7.2稍作改动，将在max函数中定义的变量z改为float型。
函数返回值的类型与指定的函数类型不同，分析其处理方法。
*/

#include<iostream>
using namespace std;

int max(float x, float y)
{
	float z;
	z = x > y ? x : y;
	return z;
}
int main()
{
	float a, b;
	int c;
	cin >> a >> b;
	c = max(a, b);
	printf("max is %d\n", c);
	return 0;
}

//结果是按照赋值原理处理