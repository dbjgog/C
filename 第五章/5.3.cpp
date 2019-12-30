/*
例5.3 while和do…while比较。 
*/

//用while循环
/*
#include<stdio.h>
int main()
{
	int i, sum=0;
	printf("please enter i, i=?");
	scanf("%d", &i);
	while(i <= 10)
	{
		sum = sum+i;
		i++;	
	}	
	printf("sum=%d\n", sum);
	return 0;
} 
*/ 
//用do…while循环

#include<stdio.h>
int main()
{
	int i, sum=0;
	printf("please enter i, i=?");
	scanf("%d", &i);
	do
	{
		sum = sum + i;
		i++;	
	}while(i <= 10);
	printf("sum=%d\n", sum);
	return 0;	
} 

//当while后面的表达式的第一次的值为“真”时，两种循环得到的结果相同
//否者两者结果不相同
//while是先判断后执行
//do…while是先执行后判断 
