/*
��5.1 ��1+2+3+��+100��
*/

#include<stdio.h>
int main()
{
	int i=1, sum=0;
	while(i <= 100)
	{
		sum = sum + i;
		i++;	
	}	
	printf("sum=%d\n", sum);
	return 0;
} 

