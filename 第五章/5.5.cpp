/*
例5.5 要求输出100~200之间的不能被3整除的数。
*/

#include<stdio.h>
int main()
{
	int n;
	for(n=100; n<=200; n++)
	{
		if(n%3 == 0) continue;
		printf("%d\t", n);	
	}	
	printf("\n");
	return 0;
} 
