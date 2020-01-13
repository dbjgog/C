/*
例7.15 若外部变量与局部变量同名，分析结果。
*/

#include<stdio.h>
int a = 3;
int b = 5;
int main()
{
	int max(int a, int b);
	int a = 8;
	printf("max=%d\n", max(a, b));//输出8
	return 0;
}

int max(int a, int b)
{
	int c;
	c = a>b?a:b;
	return (c);
}
