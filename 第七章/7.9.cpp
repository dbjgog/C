//实参可以是常量、变量或表达式
//数组元素也可以用作函数实参，其用法与变量相同，向形参传递数组元素的值
//数组名也可以作为实参和形参，传递的是数组第一个元素的地址

/*
例7.9 输入10个数，要求输出其中最大的元素和该数是第几个数。
*/

#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a[10], m, n, i;
	printf("enter 10 integer numbers:");
	for(i = 0; i < 10; i++) scanf("%d", &a[i]);
	printf("\n");
	for(i = 1, m = a[0], n = 0; i < 10; i++)
	{
		if(max(m, a[i]) > m)
		{
			m = a[i];
			n = i;
		}
	}
	printf("The largest number is %d\nit is the %dth number.\n", m, n);
	return 0;
}

int max(int x, int y)
{
	return (x>y?x:y);
}