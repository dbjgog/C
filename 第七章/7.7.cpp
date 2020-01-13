/*
例7.7 用递归地方法求n!。
*/

/*
递归公式：
n! = 1(n = 0,1);
n! = n*(n-1)!(n > 1);
*/

#include<stdio.h>
int main()
{
	int fac(int n);
	int n;
	int y;
	printf("input an integer number:");
	scanf("%d", &n);
	
	y = fac(n);
	printf("%d! = %d\n", n, y);
	return 0;	
}

int fac(int n)
{
	int f;
	if(n < 0) printf("n<0,data error!");
	else if(n == 0|| n == 1) f = 1;
	else f = n*fac(n-1);
	return f;
}
